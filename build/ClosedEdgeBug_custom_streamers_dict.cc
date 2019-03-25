// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIcampusdOncldOacdOukdIb3008711dIbiodynamodIClosedEdgeBugdIbuilddIClosedEdgeBug_custom_streamers_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/campus.ncl.ac.uk/b3008711/biodynamo/ClosedEdgeBug/src/ClosedEdgeBug.h"
#include "/home/campus.ncl.ac.uk/b3008711/biodynamo/ClosedEdgeBug/src/diffusion_biology_modules.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void streamer_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>", ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>::Class_Version(), "variant.h", 55,
                  typeid(::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 21,
                  sizeof(::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetStreamerFunc(&streamer_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("noStreamer","true");
   }

} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr Variant<bdm::GrowthModule,bdm::KaliumSecretion>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Variant<bdm::GrowthModule,bdm::KaliumSecretion>::Class_Name()
{
   return "bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>";
}

//______________________________________________________________________________
template <> const char *Variant<bdm::GrowthModule,bdm::KaliumSecretion>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Variant<bdm::GrowthModule,bdm::KaliumSecretion>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Variant<bdm::GrowthModule,bdm::KaliumSecretion>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Variant<bdm::GrowthModule,bdm::KaliumSecretion>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> : new ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>[nElements] : new ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_bdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(TBuffer &buf, void *obj) {
      ((::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>*)obj)->::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>::Streamer(buf);
   }
} // end of namespace ROOT for class ::bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>

namespace {
  void TriggerDictionaryInitialization_ClosedEdgeBug_custom_streamers_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/home/campus.ncl.ac.uk/b3008711/.bdm/third_party/paraview/include/paraview-5.5",
"/usr/include/python2.7",
"/home/campus.ncl.ac.uk/b3008711/.bdm/third_party/root/include",
"/home/campus.ncl.ac.uk/b3008711/biodynamo/ClosedEdgeBug/build/omp",
"/home/campus.ncl.ac.uk/b3008711/.bdm/biodynamo/share/cmake/../../include",
"/home/campus.ncl.ac.uk/b3008711/biodynamo/ClosedEdgeBug/src",
"/home/campus.ncl.ac.uk/b3008711/.bdm/third_party/root/include",
"/home/campus.ncl.ac.uk/b3008711/biodynamo/ClosedEdgeBug/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ClosedEdgeBug_custom_streamers_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace bdm{struct GrowthModule;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$diffusion_biology_modules.h")))  KaliumSecretion;}
namespace bdm{template <typename ...Types> class __attribute__((annotate("$clingAutoload$variant.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Variant;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ClosedEdgeBug_custom_streamers_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef BDM_SRC_DIR
  #define BDM_SRC_DIR "/home/campus.ncl.ac.uk/b3008711/.bdm/biodynamo/include"
#endif
#ifndef USE_DICT
  #define USE_DICT 1
#endif
#ifndef USE_CATALYST
  #define USE_CATALYST 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
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

    ModelInitializer::DefineSubstance(kKalium, "Kalium", 0.5, 0,21); // correct water, water concentration used.
    cells->Commit();  // commit cells

  // Run simulation for x timesteps
  simulation.GetScheduler()->Simulate(100);

  std::cout << "Simulation completed successfully! FTH" << std::endl;



  return 0;
}

}  // namespace bdm

#endif  // CLOSEDEDGEBUG_H_
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

#ifndef DIFFUSION_BIOLOGY_MODULES_H_
#define DIFFUSION_BIOLOGY_MODULES_H_

#include "biodynamo.h"
#include <iostream>
#include <array>
#include <vector>


namespace bdm {

// List the extracellular substances
enum Substances { kKalium };

// Define secretion behavior:
// One cell is assigned to secrete Kalium artificially at one location
// Define secretion behavior:
// One cell is assigned to secrete Kalium artificially at one location
struct KaliumSecretion : public BaseBiologyModule {
  KaliumSecretion() : BaseBiologyModule() {}

  /// Empty default event constructor, because KaliumSecretion does not have
  /// state.
  template <typename TEvent, typename TBm>
  KaliumSecretion(const TEvent& event, TBm* other, uint64_t new_oid = 0) {}

  /// event handler not needed, because Chemotaxis does not have state.

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
    double amount =40.0;
    kDg->IncreaseConcentrationBy(cell->GetPosition(), amount);

    kDg->DiffuseWithClosedEdge();
    kDg->CalculateGradient();
    // x = first box , x<last box,x=x+ next box, same for y and z and will iterate over all boxes.

    cell->SetT(kDg->GetConcentration(cell->GetPosition()));
    kDg->GetAllConcentrations();
  }
 private:
  BDM_CLASS_DEF_NV(KaliumSecretion, 1);
};

}  // namespace bdm

#endif  // DIFFUSION_BIOLOGY_MODULES_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ClosedEdgeBug_custom_streamers_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ClosedEdgeBug_custom_streamers_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ClosedEdgeBug_custom_streamers_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ClosedEdgeBug_custom_streamers_dict() {
  TriggerDictionaryInitialization_ClosedEdgeBug_custom_streamers_dict_Impl();
}
