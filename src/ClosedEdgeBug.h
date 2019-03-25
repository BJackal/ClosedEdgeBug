// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------
#ifndef CLOSEDEDGEBUG_H_
#define CLOSEDEDGEBUG_H_

#include <vector>
#include <stdio.h>
#include <math.h>


#include "biodynamo.h"
#include "diffusion_biology_modules.h"



namespace bdm {

// 0. extending cell behaviour "class"
BDM_SIM_OBJECT(MyCell, Cell){

  BDM_SIM_OBJECT_HEADER(MyCell,Cell,1, cell_VC_, cell_IR_, cell_CR_, cell_T_, cell_L_, cell_IL_,cell_A_,cell_B_,cell_C_,cell_Vb_);
   public:
    MyCellExt() {}
    explicit MyCellExt(const std::array<double, 3>& position) : Base(position) {}
// Setter for dV/dt
       void SetGrowthRate( double L,double A,double R,double T,double B,double Oi,double Oe) {
        cell_VC_[kIdx] = ((L*A*R*T)/B)*(Oi-Oe);
      }
      double GetGrowthRate() const { return cell_VC_[kIdx]; }
// Setter for Initial Radius of cell
      void SetIR( double IR ) {
        cell_IR_[kIdx] = IR;
      }
      double GetIR() const { return cell_IR_[kIdx]; }
// Setter for Cooling Rate
      void SetCR( double CR ) {
        cell_CR_[kIdx] = CR;
      }
      double GetCR() const { return cell_CR_[kIdx]; }
// Temperature Setter
      void SetT( double T ) {
        cell_T_[kIdx] = T;
      }
      double GetT() const { return cell_T_[kIdx]; }
// Hydraulic permeability setter for T = const , this is also constant.
      void SetL(double LR, double AE ,double R ,double TI, double RT){
        cell_L_[kIdx] = LR*exp(((-AE/R)*((1/TI)-(1/RT))));
      }
      double GetL() const { return cell_L_[kIdx]; }
//Initial Lp setter
    void SetIL( double IL ) {
      cell_IL_[kIdx] = IL;
    }
    double GetIL() const { return cell_IL_[kIdx]; }
// Cell Surface Area Setter [TODO] needs to be created once memory leaking issue has been solved

// A value.
    void SetA(double A) {
        cell_A_[kIdx] = A;
      }
      double GetA() const { return cell_A_[kIdx]; }

// B value.
    void SetB(double B) {
        cell_B_[kIdx] = B;

    }
      double GetB() const { return cell_B_[kIdx]; }

// Concentration
    void SetC(double C) {
            cell_C_[kIdx] = C;

    }
    double GetC() const { return cell_C_[kIdx]; }

// Osmotically inavtive volume
       void SetVb(double Vb) {
            cell_Vb_[kIdx] = Vb;

    }
    double GetVb() const { return cell_Vb_[kIdx]; }


   private:
    vec<double> cell_VC_;
    vec<double> cell_IR_;
    vec<double> cell_CR_;
    vec<double> cell_T_;
    vec<double> cell_L_;
    vec<double> cell_IL_;
    vec<double> cell_A_;
    vec<double> cell_B_;
    vec<double> cell_C_;
    vec<double> cell_Vb_;
};

// 1. Growth behaviour
struct GrowthModule : public BaseBiologyModule {
  GrowthModule() : BaseBiologyModule(gAllEventIds) {}
  GrowthModule(double threshold, double growth_rate,
             std::initializer_list<EventId> event_list)
      : BaseBiologyModule(event_list),
        threshold_(threshold),
        growth_rate_(growth_rate) {}

  /// Default event constructor
  template <typename TEvent, typename TBm>
  GrowthModule(const TEvent& event, TBm* other, uint64_t new_oid = 0) {
    threshold_ = other->threshold_;
    growth_rate_ = other->growth_rate_;
  }


    template <typename T, typename TSimulation = Simulation<>>
    void Run(T* cell) {
    auto* sim = TSimulation::GetActive();
    auto* rm = sim->GetResourceManager();
    static auto* kDg = rm->GetDiffusionGrid(kKalium);
    kDg->SetConcentrationThreshold(42.0);

    auto& position = cell->GetPosition();
    std::array<double, 3> gradient;
    kDg->GetGradient(position, &gradient);
    gradient[0] *= 0.1;
    gradient[1] *= 0.1;
    gradient[2] *= 0.1;

    cell->SetT(kDg->GetConcentration(cell->GetPosition()));
  }

 private :
  BDM_CLASS_DEF_NV(GrowthModule, 1);
  double threshold_ = 0;
  double growth_rate_  = 1; // NEED TO CORRECT;
};


// 2 . Define compile time parameter
BDM_CTPARAM() {
  BDM_CTPARAM_HEADER();
  using SimObjectTypes = CTList<MyCell>;  // use MyCell object

  // Override default BiologyModules for Cell
  BDM_CTPARAM_FOR(bdm, MyCell) { using BiologyModules = CTList< GrowthModule,KaliumSecretion>; };
};

inline int Simulate(int argc, const char** argv) {
  auto set_param = [](auto* param) {
    param->bound_space_ = true;
    param->min_bound_ = 0;
    param->max_bound_ = 105;
    param->run_mechanical_interactions_ = true;
  };

  Simulation<> simulation(argc, argv, set_param);
  auto* rm = simulation.GetResourceManager();
  auto* param = simulation.GetParam();
  auto* random = simulation.GetRandom();

  size_t nb_of_cells = 10;  // number of cells in the simulation
  double x_coord, y_coord, z_coord;

  // create a structure to contain cells
  auto* cells = rm->template Get<MyCell>();
  // allocate the correct number of cell in our cells structure before
  // cell creation
  cells->reserve(nb_of_cells);
  double n = 4;
  double m = 2;
  // FOR EMITTING CELLS
  for (size_t i = 3; i < n; i=i+2) {
     x_coord = i;
   for (size_t j = 3; j < n; j=j+2) {
     y_coord = j;
    for (size_t k = 1; k < m; ++k) {
      z_coord= k;
      double xx = x_coord*10;
      double yy = y_coord*10;
      double zz = z_coord*10;

      // creating the cell at position x, y, z
      MyCell cell({xx,yy,zz});
      // set cell parameters
      cell.SetDiameter(1.0);
      //cell.AddBiologyModule(Chemotaxis());
      cell.AddBiologyModule(KaliumSecretion());
      cells->push_back(cell);  // put the created cell in our cells structure

    }
   }
 }
//  //OTHER CELLS used to detect concentration at different locations.
//   for (size_t i = 0; i < nb_of_cells; ++i) {
//     our modelling will be a cell cube of 100*100*100
//     random double between 0 and 100
//     x_coord = random->Uniform(10, 100);
//     y_coord = random->Uniform(10, 100);
//     z_coord = random->Uniform(10, 100);
//
//     creating the cell at position x, y, z
//     MyCell cell({x_coord, y_coord, z_coord});
//     set cell parameters
//     cell.SetDiameter(1.0);
//     cell.SetT(0);
//     cell.AddBiologyModule(GrowthModule());
//     cells->push_back(cell);  // put the created cell in our cells structure
//   }

    ModelInitializer::DefineSubstance(kKalium, "Kalium", 3.0, 0,21); // correct water, water concentration used.
    cells->Commit();  // commit cells

  // Run simulation for x timesteps
  simulation.GetScheduler()->Simulate(100);

  std::cout << "Simulation completed successfully! FTH" << std::endl;



  return 0;
}

}  // namespace bdm

#endif  // CLOSEDEDGEBUG_H_
