// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIcampusdOncldOacdOukdIb3008711dIbiodynamodIClosedEdgeBugdIbuilddIClosedEdgeBug_dict

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
   static TClass *tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary();
   static void tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass*);
   static void *new_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p = 0);
   static void *newArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t size, void *p);
   static void delete_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void deleteArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void destruct_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >", "tuple", 556,
                  typeid(::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >) );
      instance.SetNew(&new_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetNewArray(&newArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDelete(&delete_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDestructor(&destruct_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)0x0)->GetClass();
      tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTransactionalVectorlEintgR_Dictionary();
   static void bdmcLcLTransactionalVectorlEintgR_TClassManip(TClass*);
   static void *new_bdmcLcLTransactionalVectorlEintgR(void *p = 0);
   static void *newArray_bdmcLcLTransactionalVectorlEintgR(Long_t size, void *p);
   static void delete_bdmcLcLTransactionalVectorlEintgR(void *p);
   static void deleteArray_bdmcLcLTransactionalVectorlEintgR(void *p);
   static void destruct_bdmcLcLTransactionalVectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::TransactionalVector<int>*)
   {
      ::bdm::TransactionalVector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::TransactionalVector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::TransactionalVector<int>", "transactional_vector.h", 36,
                  typeid(::bdm::TransactionalVector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTransactionalVectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::TransactionalVector<int>) );
      instance.SetNew(&new_bdmcLcLTransactionalVectorlEintgR);
      instance.SetNewArray(&newArray_bdmcLcLTransactionalVectorlEintgR);
      instance.SetDelete(&delete_bdmcLcLTransactionalVectorlEintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTransactionalVectorlEintgR);
      instance.SetDestructor(&destruct_bdmcLcLTransactionalVectorlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::TransactionalVector<int>*)
   {
      return GenerateInitInstanceLocal((::bdm::TransactionalVector<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::TransactionalVector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTransactionalVectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::TransactionalVector<int>*)0x0)->GetClass();
      bdmcLcLTransactionalVectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTransactionalVectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_Dictionary();
   static void bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p = 0);
   static void delete_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p);
   static void destruct_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)
   {
      ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >", ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Class_Version(), "backend.h", 81,
                  typeid(::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >) );
      instance.SetNew(&new_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0)->GetClass();
      bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_Dictionary();
   static void bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p = 0);
   static void delete_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p);
   static void destruct_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OneElementArray<array<double,3> >*)
   {
      ::bdm::OneElementArray<array<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::OneElementArray<array<double,3> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OneElementArray<array<double,3> >", ::bdm::OneElementArray<array<double,3> >::Class_Version(), "backend.h", 81,
                  typeid(::bdm::OneElementArray<array<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OneElementArray<array<double,3> >) );
      instance.SetNew(&new_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OneElementArray<array<double,3> >*)
   {
      return GenerateInitInstanceLocal((::bdm::OneElementArray<array<double,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0)->GetClass();
      bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOneElementArraylEdoublegR_Dictionary();
   static void bdmcLcLOneElementArraylEdoublegR_TClassManip(TClass*);
   static void *new_bdmcLcLOneElementArraylEdoublegR(void *p = 0);
   static void delete_bdmcLcLOneElementArraylEdoublegR(void *p);
   static void deleteArray_bdmcLcLOneElementArraylEdoublegR(void *p);
   static void destruct_bdmcLcLOneElementArraylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OneElementArray<double>*)
   {
      ::bdm::OneElementArray<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::OneElementArray<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OneElementArray<double>", ::bdm::OneElementArray<double>::Class_Version(), "backend.h", 81,
                  typeid(::bdm::OneElementArray<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOneElementArraylEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OneElementArray<double>) );
      instance.SetNew(&new_bdmcLcLOneElementArraylEdoublegR);
      instance.SetDelete(&delete_bdmcLcLOneElementArraylEdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOneElementArraylEdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLOneElementArraylEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OneElementArray<double>*)
   {
      return GenerateInitInstanceLocal((::bdm::OneElementArray<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOneElementArraylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0)->GetClass();
      bdmcLcLOneElementArraylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOneElementArraylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOneElementArraylEunsignedsPintgR_Dictionary();
   static void bdmcLcLOneElementArraylEunsignedsPintgR_TClassManip(TClass*);
   static void *new_bdmcLcLOneElementArraylEunsignedsPintgR(void *p = 0);
   static void delete_bdmcLcLOneElementArraylEunsignedsPintgR(void *p);
   static void deleteArray_bdmcLcLOneElementArraylEunsignedsPintgR(void *p);
   static void destruct_bdmcLcLOneElementArraylEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OneElementArray<unsigned int>*)
   {
      ::bdm::OneElementArray<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::OneElementArray<unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OneElementArray<unsigned int>", ::bdm::OneElementArray<unsigned int>::Class_Version(), "backend.h", 81,
                  typeid(::bdm::OneElementArray<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOneElementArraylEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OneElementArray<unsigned int>) );
      instance.SetNew(&new_bdmcLcLOneElementArraylEunsignedsPintgR);
      instance.SetDelete(&delete_bdmcLcLOneElementArraylEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOneElementArraylEunsignedsPintgR);
      instance.SetDestructor(&destruct_bdmcLcLOneElementArraylEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OneElementArray<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::bdm::OneElementArray<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOneElementArraylEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0)->GetClass();
      bdmcLcLOneElementArraylEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOneElementArraylEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >", "type_util.h", 32,
                  typeid(::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >", "type_util.h", 37,
                  typeid(::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)
   {
      ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>", "type_util.h", 37,
                  typeid(::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)
   {
      ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >", "type_util.h", 37,
                  typeid(::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)
   {
      ::bdm::type_ternary_operator<false,unsigned long&,unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<false,unsigned long&,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<false,unsigned long&,unsigned long>", "type_util.h", 37,
                  typeid(::bdm::type_ternary_operator<false,unsigned long&,unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<false,unsigned long&,unsigned long>) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)
   {
      ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>", "type_util.h", 32,
                  typeid(::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)
   {
      ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >", "type_util.h", 32,
                  typeid(::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary();
   static void bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p = 0);
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p);
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p);
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)
   {
      ::bdm::type_ternary_operator<true,unsigned long&,unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::type_ternary_operator<true,unsigned long&,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::type_ternary_operator<true,unsigned long&,unsigned long>", "type_util.h", 32,
                  typeid(::bdm::type_ternary_operator<true,unsigned long&,unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::type_ternary_operator<true,unsigned long&,unsigned long>) );
      instance.SetNew(&new_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDelete(&delete_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)
   {
      return GenerateInitInstanceLocal((::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)0x0)->GetClass();
      bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_soalEbdmcLcLSoagR_Dictionary();
   static void bdmcLcLis_soalEbdmcLcLSoagR_TClassManip(TClass*);
   static void *new_bdmcLcLis_soalEbdmcLcLSoagR(void *p = 0);
   static void *newArray_bdmcLcLis_soalEbdmcLcLSoagR(Long_t size, void *p);
   static void delete_bdmcLcLis_soalEbdmcLcLSoagR(void *p);
   static void deleteArray_bdmcLcLis_soalEbdmcLcLSoagR(void *p);
   static void destruct_bdmcLcLis_soalEbdmcLcLSoagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_soa<bdm::Soa>*)
   {
      ::bdm::is_soa<bdm::Soa> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_soa<bdm::Soa>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_soa<bdm::Soa>", "type_util.h", 43,
                  typeid(::bdm::is_soa<bdm::Soa>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_soalEbdmcLcLSoagR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_soa<bdm::Soa>) );
      instance.SetNew(&new_bdmcLcLis_soalEbdmcLcLSoagR);
      instance.SetNewArray(&newArray_bdmcLcLis_soalEbdmcLcLSoagR);
      instance.SetDelete(&delete_bdmcLcLis_soalEbdmcLcLSoagR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_soalEbdmcLcLSoagR);
      instance.SetDestructor(&destruct_bdmcLcLis_soalEbdmcLcLSoagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_soa<bdm::Soa>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_soa<bdm::Soa>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_soa<bdm::Soa>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_soalEbdmcLcLSoagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_soa<bdm::Soa>*)0x0)->GetClass();
      bdmcLcLis_soalEbdmcLcLSoagR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_soalEbdmcLcLSoagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>", "tuple_util.h", 67,
                  typeid(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)
   {
      ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>", "tuple_util.h", 55,
                  typeid(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary();
   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >", "tuple_util.h", 55,
                  typeid(::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >) );
      instance.SetNew(&new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)0x0)->GetClass();
      bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>", "tuple_util.h", 67,
                  typeid(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)
   {
      ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>", "tuple_util.h", 55,
                  typeid(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary();
   static void bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p = 0);
   static void delete_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);
   static void deleteArray_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);
   static void destruct_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)
   {
      ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >", ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Class_Version(), "resource_manager.h", 150,
                  typeid(::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >) );
      instance.SetNew(&new_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDelete(&delete_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)
   {
      return GenerateInitInstanceLocal((::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass();
      bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary();
   static void bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void destruct_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", "grid.h", 84,
                  typeid(::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >) );
      instance.SetNew(&new_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0)->GetClass();
      bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary();
   static void bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void destruct_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", "scheduler.h", 39,
                  typeid(::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >) );
      instance.SetNew(&new_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0)->GetClass();
      bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagR_Dictionary();
   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagR_TClassManip(TClass*);
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p = 0);
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(Long_t size, void *p);
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p);
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p);
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CompileTimeParam<bdm::Soa>*)
   {
      ::bdm::CompileTimeParam<bdm::Soa> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CompileTimeParam<bdm::Soa>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CompileTimeParam<bdm::Soa>", "", 165,
                  typeid(::bdm::CompileTimeParam<bdm::Soa>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCompileTimeParamlEbdmcLcLSoagR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CompileTimeParam<bdm::Soa>) );
      instance.SetNew(&new_bdmcLcLCompileTimeParamlEbdmcLcLSoagR);
      instance.SetNewArray(&newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR);
      instance.SetDelete(&delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR);
      instance.SetDestructor(&destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CompileTimeParam<bdm::Soa>*)
   {
      return GenerateInitInstanceLocal((::bdm::CompileTimeParam<bdm::Soa>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>*)0x0)->GetClass();
      bdmcLcLCompileTimeParamlEbdmcLcLSoagR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary();
   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass*);
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p = 0);
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t size, void *p);
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>", "", 170,
                  typeid(::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>) );
      instance.SetNew(&new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetNewArray(&newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDelete(&delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDestructor(&destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      return GenerateInitInstanceLocal((::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0)->GetClass();
      bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_Dictionary();
   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_TClassManip(TClass*);
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p = 0);
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(Long_t size, void *p);
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p);
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p);
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CompileTimeParam<bdm::Soa>::Param*)
   {
      ::bdm::CompileTimeParam<bdm::Soa>::Param *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CompileTimeParam<bdm::Soa>::Param));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CompileTimeParam<bdm::Soa>::Param", "", 166,
                  typeid(::bdm::CompileTimeParam<bdm::Soa>::Param), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CompileTimeParam<bdm::Soa>::Param) );
      instance.SetNew(&new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam);
      instance.SetNewArray(&newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam);
      instance.SetDelete(&delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam);
      instance.SetDestructor(&destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CompileTimeParam<bdm::Soa>::Param*)
   {
      return GenerateInitInstanceLocal((::bdm::CompileTimeParam<bdm::Soa>::Param*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>::Param*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Soa>::Param*)0x0)->GetClass();
      bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLScalargR_Dictionary();
   static void bdmcLcLCompileTimeParamlEbdmcLcLScalargR_TClassManip(TClass*);
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p = 0);
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(Long_t size, void *p);
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p);
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p);
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CompileTimeParam<bdm::Scalar>*)
   {
      ::bdm::CompileTimeParam<bdm::Scalar> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CompileTimeParam<bdm::Scalar>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CompileTimeParam<bdm::Scalar>", "", 165,
                  typeid(::bdm::CompileTimeParam<bdm::Scalar>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCompileTimeParamlEbdmcLcLScalargR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CompileTimeParam<bdm::Scalar>) );
      instance.SetNew(&new_bdmcLcLCompileTimeParamlEbdmcLcLScalargR);
      instance.SetNewArray(&newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR);
      instance.SetDelete(&delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR);
      instance.SetDestructor(&destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CompileTimeParam<bdm::Scalar>*)
   {
      return GenerateInitInstanceLocal((::bdm::CompileTimeParam<bdm::Scalar>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Scalar>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLScalargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Scalar>*)0x0)->GetClass();
      bdmcLcLCompileTimeParamlEbdmcLcLScalargR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCompileTimeParamlEbdmcLcLScalargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary();
   static void bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass*);
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p = 0);
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t size, void *p);
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>", "", 170,
                  typeid(::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>) );
      instance.SetNew(&new_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetNewArray(&newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDelete(&delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDestructor(&destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      return GenerateInitInstanceLocal((::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0)->GetClass();
      bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary();
   static void bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p = 0);
   static void delete_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);
   static void deleteArray_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);
   static void destruct_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)
   {
      ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >", ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >::Class_Version(), "simulation.h", 47,
                  typeid(::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >) );
      instance.SetNew(&new_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDelete(&delete_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)
   {
      return GenerateInitInstanceLocal((::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass();
      bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_Dictionary();
   static void bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_TClassManip(TClass*);
   static void *new_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p = 0);
   static void delete_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p);
   static void deleteArray_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p);
   static void destruct_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::InlineVector<bdm::SoHandle,4>*)
   {
      ::bdm::InlineVector<bdm::SoHandle,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::InlineVector<bdm::SoHandle,4> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::InlineVector<bdm::SoHandle,4>", ::bdm::InlineVector<bdm::SoHandle,4>::Class_Version(), "inline_vector.h", 33,
                  typeid(::bdm::InlineVector<bdm::SoHandle,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::InlineVector<bdm::SoHandle,4>) );
      instance.SetNew(&new_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR);
      instance.SetDelete(&delete_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR);
      instance.SetDestructor(&destruct_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::InlineVector<bdm::SoHandle,4>*)
   {
      return GenerateInitInstanceLocal((::bdm::InlineVector<bdm::SoHandle,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0)->GetClass();
      bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_Dictionary();
   static void bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_TClassManip(TClass*);
   static void *new_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p = 0);
   static void delete_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p);
   static void deleteArray_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p);
   static void destruct_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::InlineVector<array<double,3>,4>*)
   {
      ::bdm::InlineVector<array<double,3>,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::InlineVector<array<double,3>,4> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::InlineVector<array<double,3>,4>", ::bdm::InlineVector<array<double,3>,4>::Class_Version(), "inline_vector.h", 33,
                  typeid(::bdm::InlineVector<array<double,3>,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::InlineVector<array<double,3>,4>) );
      instance.SetNew(&new_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR);
      instance.SetDelete(&delete_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR);
      instance.SetDestructor(&destruct_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::InlineVector<array<double,3>,4>*)
   {
      return GenerateInitInstanceLocal((::bdm::InlineVector<array<double,3>,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0)->GetClass();
      bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary();
   static void bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass*);
   static void *new_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p = 0);
   static void *newArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t size, void *p);
   static void delete_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void deleteArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);
   static void destruct_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>", "compile_time_list.h", 47,
                  typeid(::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>) );
      instance.SetNew(&new_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetNewArray(&newArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDelete(&delete_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      instance.SetDestructor(&destruct_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)
   {
      return GenerateInitInstanceLocal((::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)0x0)->GetClass();
      bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary();
   static void bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", "resource_manager.h", 103,
                  typeid(::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >) );
      instance.SetNew(&new_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0)->GetClass();
      bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary();
   static void bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", "resource_manager.h", 119,
                  typeid(::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >) );
      instance.SetNew(&new_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0)->GetClass();
      bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary();
   static void bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", "resource_manager.h", 132,
                  typeid(::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >) );
      instance.SetNew(&new_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)
   {
      return GenerateInitInstanceLocal((::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)0x0)->GetClass();
      bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "simulation_object.h", 251,
                  typeid(::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "simulation_object.h", 49,
                  typeid(::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", "simulation_object.h", 304,
                  typeid(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", "simulation_object.h", 304,
                  typeid(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "simulation_object.h", 314,
                  typeid(::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "simulation_object.h", 314,
                  typeid(::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "cell.h", 39,
                  typeid(::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "cell.h", 39,
                  typeid(::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCapsulelEbdmcLcLCellExtgR_Dictionary();
   static void bdmcLcLCapsulelEbdmcLcLCellExtgR_TClassManip(TClass*);
   static void *new_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p = 0);
   static void *newArray_bdmcLcLCapsulelEbdmcLcLCellExtgR(Long_t size, void *p);
   static void delete_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p);
   static void deleteArray_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p);
   static void destruct_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Capsule<bdm::CellExt>*)
   {
      ::bdm::Capsule<bdm::CellExt> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Capsule<bdm::CellExt>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Capsule<bdm::CellExt>", "cell.h", 39,
                  typeid(::bdm::Capsule<bdm::CellExt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCapsulelEbdmcLcLCellExtgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Capsule<bdm::CellExt>) );
      instance.SetNew(&new_bdmcLcLCapsulelEbdmcLcLCellExtgR);
      instance.SetNewArray(&newArray_bdmcLcLCapsulelEbdmcLcLCellExtgR);
      instance.SetDelete(&delete_bdmcLcLCapsulelEbdmcLcLCellExtgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCapsulelEbdmcLcLCellExtgR);
      instance.SetDestructor(&destruct_bdmcLcLCapsulelEbdmcLcLCellExtgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Capsule<bdm::CellExt>*)
   {
      return GenerateInitInstanceLocal((::bdm::Capsule<bdm::CellExt>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Capsule<bdm::CellExt>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCapsulelEbdmcLcLCellExtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Capsule<bdm::CellExt>*)0x0)->GetClass();
      bdmcLcLCapsulelEbdmcLcLCellExtgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCapsulelEbdmcLcLCellExtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLSoagR_Dictionary();
   static void bdmcLcLDefaultCTParamlEbdmcLcLSoagR_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p = 0);
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(Long_t size, void *p);
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p);
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p);
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultCTParam<bdm::Soa>*)
   {
      ::bdm::DefaultCTParam<bdm::Soa> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultCTParam<bdm::Soa>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultCTParam<bdm::Soa>", "compile_time_param.h", 103,
                  typeid(::bdm::DefaultCTParam<bdm::Soa>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultCTParamlEbdmcLcLSoagR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultCTParam<bdm::Soa>) );
      instance.SetNew(&new_bdmcLcLDefaultCTParamlEbdmcLcLSoagR);
      instance.SetNewArray(&newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR);
      instance.SetDelete(&delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR);
      instance.SetDestructor(&destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultCTParam<bdm::Soa>*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultCTParam<bdm::Soa>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Soa>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLSoagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Soa>*)0x0)->GetClass();
      bdmcLcLDefaultCTParamlEbdmcLcLSoagR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultCTParamlEbdmcLcLSoagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary();
   static void bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p = 0);
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t size, void *p);
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>", "compile_time_param.h", 114,
                  typeid(::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>) );
      instance.SetNew(&new_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetNewArray(&newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDelete(&delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDestructor(&destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0)->GetClass();
      bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLScalargR_Dictionary();
   static void bdmcLcLDefaultCTParamlEbdmcLcLScalargR_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p = 0);
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(Long_t size, void *p);
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p);
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p);
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultCTParam<bdm::Scalar>*)
   {
      ::bdm::DefaultCTParam<bdm::Scalar> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultCTParam<bdm::Scalar>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultCTParam<bdm::Scalar>", "compile_time_param.h", 103,
                  typeid(::bdm::DefaultCTParam<bdm::Scalar>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultCTParamlEbdmcLcLScalargR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultCTParam<bdm::Scalar>) );
      instance.SetNew(&new_bdmcLcLDefaultCTParamlEbdmcLcLScalargR);
      instance.SetNewArray(&newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR);
      instance.SetDelete(&delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR);
      instance.SetDestructor(&destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultCTParam<bdm::Scalar>*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultCTParam<bdm::Scalar>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Scalar>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLScalargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Scalar>*)0x0)->GetClass();
      bdmcLcLDefaultCTParamlEbdmcLcLScalargR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultCTParamlEbdmcLcLScalargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary();
   static void bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p = 0);
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t size, void *p);
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>", "compile_time_param.h", 114,
                  typeid(::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>) );
      instance.SetNew(&new_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetNewArray(&newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDelete(&delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      instance.SetDestructor(&destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)0x0)->GetClass();
      bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary();
   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(TClass*);
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p = 0);
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(Long_t size, void *p);
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::FixedSizeVector<unsigned long,14>*)
   {
      ::bdm::FixedSizeVector<unsigned long,14> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::FixedSizeVector<unsigned long,14>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::FixedSizeVector<unsigned long,14>", "fixed_size_vector.h", 28,
                  typeid(::bdm::FixedSizeVector<unsigned long,14>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::FixedSizeVector<unsigned long,14>) );
      instance.SetNew(&new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetNewArray(&newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDelete(&delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDestructor(&destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::FixedSizeVector<unsigned long,14>*)
   {
      return GenerateInitInstanceLocal((::bdm::FixedSizeVector<unsigned long,14>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,14>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,14>*)0x0)->GetClass();
      bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_Dictionary();
   static void bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_TClassManip(TClass*);
   static void *new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p = 0);
   static void *newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(Long_t size, void *p);
   static void delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p);
   static void deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p);
   static void destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)
   {
      ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>", "fixed_size_vector.h", 28,
                  typeid(::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>) );
      instance.SetNew(&new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR);
      instance.SetNewArray(&newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR);
      instance.SetDelete(&delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR);
      instance.SetDestructor(&destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)
   {
      return GenerateInitInstanceLocal((::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)0x0)->GetClass();
      bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary();
   static void bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(TClass*);
   static void *new_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p = 0);
   static void *newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(Long_t size, void *p);
   static void delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);
   static void deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);
   static void destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)
   {
      ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>", "parallel_resize_vector.h", 24,
                  typeid(::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>) );
      instance.SetNew(&new_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetNewArray(&newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDelete(&delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDestructor(&destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)
   {
      return GenerateInitInstanceLocal((::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)0x0)->GetClass();
      bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_Dictionary();
   static void bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_TClassManip(TClass*);
   static void *new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p = 0);
   static void *newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(Long_t size, void *p);
   static void delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p);
   static void deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p);
   static void destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)
   {
      ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>", "grid.h", 42,
                  typeid(::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>) );
      instance.SetNew(&new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR);
      instance.SetNewArray(&newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR);
      instance.SetDelete(&delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR);
      instance.SetDestructor(&destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)
   {
      return GenerateInitInstanceLocal((::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)0x0)->GetClass();
      bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_Dictionary();
   static void bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_TClassManip(TClass*);
   static void *new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p = 0);
   static void *newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(Long_t size, void *p);
   static void delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p);
   static void deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p);
   static void destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)
   {
      ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>", "grid.h", 42,
                  typeid(::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>) );
      instance.SetNew(&new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR);
      instance.SetNewArray(&newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR);
      instance.SetDelete(&delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR);
      instance.SetDestructor(&destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)
   {
      return GenerateInitInstanceLocal((::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)0x0)->GetClass();
      bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary();
   static void bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void destruct_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", "displacement_op_cpu.h", 30,
                  typeid(::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >) );
      instance.SetNew(&new_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0)->GetClass();
      bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary();
   static void bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void destruct_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", "displacement_op.h", 38,
                  typeid(::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >) );
      instance.SetNew(&new_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0)->GetClass();
      bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOpTimerlEbdmcLcLCommitOpgR_Dictionary();
   static void bdmcLcLOpTimerlEbdmcLcLCommitOpgR_TClassManip(TClass*);
   static void delete_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p);
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p);
   static void destruct_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OpTimer<bdm::CommitOp>*)
   {
      ::bdm::OpTimer<bdm::CommitOp> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::OpTimer<bdm::CommitOp>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OpTimer<bdm::CommitOp>", "op_timer.h", 26,
                  typeid(::bdm::OpTimer<bdm::CommitOp>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOpTimerlEbdmcLcLCommitOpgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OpTimer<bdm::CommitOp>) );
      instance.SetDelete(&delete_bdmcLcLOpTimerlEbdmcLcLCommitOpgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOpTimerlEbdmcLcLCommitOpgR);
      instance.SetDestructor(&destruct_bdmcLcLOpTimerlEbdmcLcLCommitOpgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OpTimer<bdm::CommitOp>*)
   {
      return GenerateInitInstanceLocal((::bdm::OpTimer<bdm::CommitOp>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::CommitOp>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOpTimerlEbdmcLcLCommitOpgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::CommitOp>*)0x0)->GetClass();
      bdmcLcLOpTimerlEbdmcLcLCommitOpgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOpTimerlEbdmcLcLCommitOpgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_Dictionary();
   static void bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_TClassManip(TClass*);
   static void delete_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p);
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p);
   static void destruct_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OpTimer<bdm::BiologyModuleOp>*)
   {
      ::bdm::OpTimer<bdm::BiologyModuleOp> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::OpTimer<bdm::BiologyModuleOp>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OpTimer<bdm::BiologyModuleOp>", "op_timer.h", 26,
                  typeid(::bdm::OpTimer<bdm::BiologyModuleOp>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OpTimer<bdm::BiologyModuleOp>) );
      instance.SetDelete(&delete_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR);
      instance.SetDestructor(&destruct_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OpTimer<bdm::BiologyModuleOp>*)
   {
      return GenerateInitInstanceLocal((::bdm::OpTimer<bdm::BiologyModuleOp>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::BiologyModuleOp>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::BiologyModuleOp>*)0x0)->GetClass();
      bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_Dictionary();
   static void bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_TClassManip(TClass*);
   static void delete_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p);
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p);
   static void destruct_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OpTimer<bdm::BoundSpace>*)
   {
      ::bdm::OpTimer<bdm::BoundSpace> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::OpTimer<bdm::BoundSpace>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OpTimer<bdm::BoundSpace>", "op_timer.h", 26,
                  typeid(::bdm::OpTimer<bdm::BoundSpace>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OpTimer<bdm::BoundSpace>) );
      instance.SetDelete(&delete_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR);
      instance.SetDestructor(&destruct_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OpTimer<bdm::BoundSpace>*)
   {
      return GenerateInitInstanceLocal((::bdm::OpTimer<bdm::BoundSpace>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::BoundSpace>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::BoundSpace>*)0x0)->GetClass();
      bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOpTimerlEbdmcLcLBoundSpacegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_Dictionary();
   static void bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_TClassManip(TClass*);
   static void delete_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)
   {
      ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >", "op_timer.h", 26,
                  typeid(::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >) );
      instance.SetDelete(&delete_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)
   {
      return GenerateInitInstanceLocal((::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)0x0)->GetClass();
      bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary();
   static void bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass*);
   static void delete_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);
   static void destruct_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", "visualization/catalyst_adaptor.h", 620,
                  typeid(::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >) );
      instance.SetDelete(&delete_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)0x0)->GetClass();
      bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLKaliumSecretion(void *p = 0);
   static void *newArray_bdmcLcLKaliumSecretion(Long_t size, void *p);
   static void delete_bdmcLcLKaliumSecretion(void *p);
   static void deleteArray_bdmcLcLKaliumSecretion(void *p);
   static void destruct_bdmcLcLKaliumSecretion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::KaliumSecretion*)
   {
      ::bdm::KaliumSecretion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::KaliumSecretion >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::KaliumSecretion", ::bdm::KaliumSecretion::Class_Version(), "diffusion_biology_modules.h", 33,
                  typeid(::bdm::KaliumSecretion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::KaliumSecretion::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::KaliumSecretion) );
      instance.SetNew(&new_bdmcLcLKaliumSecretion);
      instance.SetNewArray(&newArray_bdmcLcLKaliumSecretion);
      instance.SetDelete(&delete_bdmcLcLKaliumSecretion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLKaliumSecretion);
      instance.SetDestructor(&destruct_bdmcLcLKaliumSecretion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::KaliumSecretion*)
   {
      return GenerateInitInstanceLocal((::bdm::KaliumSecretion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::KaliumSecretion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "", 44,
                  typeid(::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary();
   static void bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p = 0);
   static void delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);
   static void destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Version(), "", 44,
                  typeid(::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >) );
      instance.SetNew(&new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDelete(&delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)
   {
      return GenerateInitInstanceLocal((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
      bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCapsulelEbdmcLcLMyCellExtgR_Dictionary();
   static void bdmcLcLCapsulelEbdmcLcLMyCellExtgR_TClassManip(TClass*);
   static void *new_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p = 0);
   static void *newArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(Long_t size, void *p);
   static void delete_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p);
   static void deleteArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p);
   static void destruct_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Capsule<bdm::MyCellExt>*)
   {
      ::bdm::Capsule<bdm::MyCellExt> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Capsule<bdm::MyCellExt>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Capsule<bdm::MyCellExt>", "", 44,
                  typeid(::bdm::Capsule<bdm::MyCellExt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCapsulelEbdmcLcLMyCellExtgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Capsule<bdm::MyCellExt>) );
      instance.SetNew(&new_bdmcLcLCapsulelEbdmcLcLMyCellExtgR);
      instance.SetNewArray(&newArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR);
      instance.SetDelete(&delete_bdmcLcLCapsulelEbdmcLcLMyCellExtgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR);
      instance.SetDestructor(&destruct_bdmcLcLCapsulelEbdmcLcLMyCellExtgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Capsule<bdm::MyCellExt>*)
   {
      return GenerateInitInstanceLocal((::bdm::Capsule<bdm::MyCellExt>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Capsule<bdm::MyCellExt>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCapsulelEbdmcLcLMyCellExtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Capsule<bdm::MyCellExt>*)0x0)->GetClass();
      bdmcLcLCapsulelEbdmcLcLMyCellExtgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCapsulelEbdmcLcLMyCellExtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLGrowthModule(void *p = 0);
   static void *newArray_bdmcLcLGrowthModule(Long_t size, void *p);
   static void delete_bdmcLcLGrowthModule(void *p);
   static void deleteArray_bdmcLcLGrowthModule(void *p);
   static void destruct_bdmcLcLGrowthModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::GrowthModule*)
   {
      ::bdm::GrowthModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::GrowthModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::GrowthModule", ::bdm::GrowthModule::Class_Version(), "", 124,
                  typeid(::bdm::GrowthModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::GrowthModule::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::GrowthModule) );
      instance.SetNew(&new_bdmcLcLGrowthModule);
      instance.SetNewArray(&newArray_bdmcLcLGrowthModule);
      instance.SetDelete(&delete_bdmcLcLGrowthModule);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGrowthModule);
      instance.SetDestructor(&destruct_bdmcLcLGrowthModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::GrowthModule*)
   {
      return GenerateInitInstanceLocal((::bdm::GrowthModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Class_Name()
{
   return "bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >";
}

//______________________________________________________________________________
template <> const char *OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr OneElementArray<array<double,3> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OneElementArray<array<double,3> >::Class_Name()
{
   return "bdm::OneElementArray<array<double,3> >";
}

//______________________________________________________________________________
template <> const char *OneElementArray<array<double,3> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OneElementArray<array<double,3> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OneElementArray<array<double,3> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OneElementArray<array<double,3> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<array<double,3> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr OneElementArray<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OneElementArray<double>::Class_Name()
{
   return "bdm::OneElementArray<double>";
}

//______________________________________________________________________________
template <> const char *OneElementArray<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OneElementArray<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OneElementArray<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OneElementArray<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<double>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr OneElementArray<unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *OneElementArray<unsigned int>::Class_Name()
{
   return "bdm::OneElementArray<unsigned int>";
}

//______________________________________________________________________________
template <> const char *OneElementArray<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int OneElementArray<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *OneElementArray<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *OneElementArray<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::OneElementArray<unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Class_Name()
{
   return "bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >";
}

//______________________________________________________________________________
template <> const char *ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr Simulation<bdm::CompileTimeParam<bdm::Soa> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Simulation<bdm::CompileTimeParam<bdm::Soa> >::Class_Name()
{
   return "bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >";
}

//______________________________________________________________________________
template <> const char *Simulation<bdm::CompileTimeParam<bdm::Soa> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Simulation<bdm::CompileTimeParam<bdm::Soa> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Simulation<bdm::CompileTimeParam<bdm::Soa> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Simulation<bdm::CompileTimeParam<bdm::Soa> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr InlineVector<bdm::SoHandle,4>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *InlineVector<bdm::SoHandle,4>::Class_Name()
{
   return "bdm::InlineVector<bdm::SoHandle,4>";
}

//______________________________________________________________________________
template <> const char *InlineVector<bdm::SoHandle,4>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int InlineVector<bdm::SoHandle,4>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *InlineVector<bdm::SoHandle,4>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *InlineVector<bdm::SoHandle,4>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<bdm::SoHandle,4>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr InlineVector<array<double,3>,4>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *InlineVector<array<double,3>,4>::Class_Name()
{
   return "bdm::InlineVector<array<double,3>,4>";
}

//______________________________________________________________________________
template <> const char *InlineVector<array<double,3>,4>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int InlineVector<array<double,3>,4>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *InlineVector<array<double,3>,4>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *InlineVector<array<double,3>,4>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::InlineVector<array<double,3>,4>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr KaliumSecretion::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KaliumSecretion::Class_Name()
{
   return "bdm::KaliumSecretion";
}

//______________________________________________________________________________
const char *KaliumSecretion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::KaliumSecretion*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KaliumSecretion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::KaliumSecretion*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KaliumSecretion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::KaliumSecretion*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KaliumSecretion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::KaliumSecretion*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class_Name()
{
   return "bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >";
}

//______________________________________________________________________________
template <> const char *MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr GrowthModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GrowthModule::Class_Name()
{
   return "bdm::GrowthModule";
}

//______________________________________________________________________________
const char *GrowthModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GrowthModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GrowthModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GrowthModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > : new ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >;
   }
   static void *newArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >[nElements] : new ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete ((::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void deleteArray_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete [] ((::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void destruct_tuplelEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      typedef ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLTransactionalVectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TransactionalVector<int> : new ::bdm::TransactionalVector<int>;
   }
   static void *newArray_bdmcLcLTransactionalVectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TransactionalVector<int>[nElements] : new ::bdm::TransactionalVector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLTransactionalVectorlEintgR(void *p) {
      delete ((::bdm::TransactionalVector<int>*)p);
   }
   static void deleteArray_bdmcLcLTransactionalVectorlEintgR(void *p) {
      delete [] ((::bdm::TransactionalVector<int>*)p);
   }
   static void destruct_bdmcLcLTransactionalVectorlEintgR(void *p) {
      typedef ::bdm::TransactionalVector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::TransactionalVector<int>

namespace bdm {
//______________________________________________________________________________
template <> void OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >( (TRootIOCtor *)nullptr ) : new ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p) {
      delete ((::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)p);
   }
   static void deleteArray_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p) {
      delete [] ((::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >*)p);
   }
   static void destruct_bdmcLcLOneElementArraylEvectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgRsPgR(void *p) {
      typedef ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >

namespace bdm {
//______________________________________________________________________________
template <> void OneElementArray<array<double,3> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::OneElementArray<array<double,3> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::OneElementArray<array<double,3> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::OneElementArray<array<double,3> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OneElementArray<array<double,3> >( (TRootIOCtor *)nullptr ) : new ::bdm::OneElementArray<array<double,3> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p) {
      delete ((::bdm::OneElementArray<array<double,3> >*)p);
   }
   static void deleteArray_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p) {
      delete [] ((::bdm::OneElementArray<array<double,3> >*)p);
   }
   static void destruct_bdmcLcLOneElementArraylEarraylEdoublecO3gRsPgR(void *p) {
      typedef ::bdm::OneElementArray<array<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OneElementArray<array<double,3> >

namespace bdm {
//______________________________________________________________________________
template <> void OneElementArray<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::OneElementArray<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::OneElementArray<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::OneElementArray<double>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLOneElementArraylEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OneElementArray<double>( (TRootIOCtor *)nullptr ) : new ::bdm::OneElementArray<double>( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLOneElementArraylEdoublegR(void *p) {
      delete ((::bdm::OneElementArray<double>*)p);
   }
   static void deleteArray_bdmcLcLOneElementArraylEdoublegR(void *p) {
      delete [] ((::bdm::OneElementArray<double>*)p);
   }
   static void destruct_bdmcLcLOneElementArraylEdoublegR(void *p) {
      typedef ::bdm::OneElementArray<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OneElementArray<double>

namespace bdm {
//______________________________________________________________________________
template <> void OneElementArray<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::OneElementArray<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::OneElementArray<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::OneElementArray<unsigned int>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLOneElementArraylEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OneElementArray<unsigned int>( (TRootIOCtor *)nullptr ) : new ::bdm::OneElementArray<unsigned int>( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLOneElementArraylEunsignedsPintgR(void *p) {
      delete ((::bdm::OneElementArray<unsigned int>*)p);
   }
   static void deleteArray_bdmcLcLOneElementArraylEunsignedsPintgR(void *p) {
      delete [] ((::bdm::OneElementArray<unsigned int>*)p);
   }
   static void destruct_bdmcLcLOneElementArraylEunsignedsPintgR(void *p) {
      typedef ::bdm::OneElementArray<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OneElementArray<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > : new ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >[nElements] : new ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete ((::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      typedef ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > : new ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >[nElements] : new ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete ((::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecObdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      typedef ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex> : new ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>[nElements] : new ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      delete ((::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      typedef ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> > : new ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >[nElements] : new ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete ((::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      typedef ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,unsigned long&,unsigned long> : new ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>[nElements] : new ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      delete ((::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      delete [] ((::bdm::type_ternary_operator<false,unsigned long&,unsigned long>*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEfalsecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      typedef ::bdm::type_ternary_operator<false,unsigned long&,unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<false,unsigned long&,unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex> : new ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>[nElements] : new ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      delete ((::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOrecursive_mutexaNcOrecursive_mutexgR(void *p) {
      typedef ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> > : new ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >[nElements] : new ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete ((::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOvectorlEunsignedsPlonggRaNcOvectorlEunsignedsPlonggRsPgR(void *p) {
      typedef ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,unsigned long&,unsigned long> : new ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>;
   }
   static void *newArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>[nElements] : new ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      delete ((::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)p);
   }
   static void deleteArray_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      delete [] ((::bdm::type_ternary_operator<true,unsigned long&,unsigned long>*)p);
   }
   static void destruct_bdmcLcLtype_ternary_operatorlEtruecOunsignedsPlongaNcOunsignedsPlonggR(void *p) {
      typedef ::bdm::type_ternary_operator<true,unsigned long&,unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::type_ternary_operator<true,unsigned long&,unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_soalEbdmcLcLSoagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_soa<bdm::Soa> : new ::bdm::is_soa<bdm::Soa>;
   }
   static void *newArray_bdmcLcLis_soalEbdmcLcLSoagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_soa<bdm::Soa>[nElements] : new ::bdm::is_soa<bdm::Soa>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_soalEbdmcLcLSoagR(void *p) {
      delete ((::bdm::is_soa<bdm::Soa>*)p);
   }
   static void deleteArray_bdmcLcLis_soalEbdmcLcLSoagR(void *p) {
      delete [] ((::bdm::is_soa<bdm::Soa>*)p);
   }
   static void destruct_bdmcLcLis_soalEbdmcLcLSoagR(void *p) {
      typedef ::bdm::is_soa<bdm::Soa> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_soa<bdm::Soa>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion> : new ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>[nElements] : new ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion> : new ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>[nElements] : new ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRcO1cObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > : new ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >;
   }
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >[nElements] : new ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete ((::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      delete [] ((::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >*)p);
   }
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0cObdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgR(void *p) {
      typedef ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion> : new ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>[nElements] : new ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO0cObdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion> : new ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>[nElements] : new ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLdetailcLcLGetIndexImpllEbdmcLcLKaliumSecretioncO1cObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>

namespace bdm {
//______________________________________________________________________________
template <> void ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >( (TRootIOCtor *)nullptr ) : new ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      delete ((::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)p);
   }
   static void deleteArray_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      delete [] ((::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >*)p);
   }
   static void destruct_bdmcLcLResourceManagerlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      typedef ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > : new ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >;
   }
   static void *newArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements] : new ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete ((::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void deleteArray_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete [] ((::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void destruct_bdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      typedef ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > : new ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >;
   }
   static void *newArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements] : new ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete ((::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void deleteArray_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete [] ((::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void destruct_bdmcLcLSchedulerlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      typedef ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa> : new ::bdm::CompileTimeParam<bdm::Soa>;
   }
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa>[nElements] : new ::bdm::CompileTimeParam<bdm::Soa>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p) {
      delete ((::bdm::CompileTimeParam<bdm::Soa>*)p);
   }
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p) {
      delete [] ((::bdm::CompileTimeParam<bdm::Soa>*)p);
   }
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagR(void *p) {
      typedef ::bdm::CompileTimeParam<bdm::Soa> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CompileTimeParam<bdm::Soa>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> : new ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>;
   }
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements] : new ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete ((::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete [] ((::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      typedef ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CompileTimeParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa>::Param : new ::bdm::CompileTimeParam<bdm::Soa>::Param;
   }
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Soa>::Param[nElements] : new ::bdm::CompileTimeParam<bdm::Soa>::Param[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p) {
      delete ((::bdm::CompileTimeParam<bdm::Soa>::Param*)p);
   }
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p) {
      delete [] ((::bdm::CompileTimeParam<bdm::Soa>::Param*)p);
   }
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLSoagRcLcLParam(void *p) {
      typedef ::bdm::CompileTimeParam<bdm::Soa>::Param current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CompileTimeParam<bdm::Soa>::Param

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Scalar> : new ::bdm::CompileTimeParam<bdm::Scalar>;
   }
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Scalar>[nElements] : new ::bdm::CompileTimeParam<bdm::Scalar>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p) {
      delete ((::bdm::CompileTimeParam<bdm::Scalar>*)p);
   }
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p) {
      delete [] ((::bdm::CompileTimeParam<bdm::Scalar>*)p);
   }
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargR(void *p) {
      typedef ::bdm::CompileTimeParam<bdm::Scalar> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CompileTimeParam<bdm::Scalar>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> : new ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>;
   }
   static void *newArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements] : new ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete ((::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void deleteArray_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete [] ((::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void destruct_bdmcLcLCompileTimeParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      typedef ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CompileTimeParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>

namespace bdm {
//______________________________________________________________________________
template <> void Simulation<bdm::CompileTimeParam<bdm::Soa> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >( (TRootIOCtor *)nullptr ) : new ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      delete ((::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)p);
   }
   static void deleteArray_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      delete [] ((::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >*)p);
   }
   static void destruct_bdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgR(void *p) {
      typedef ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >

namespace bdm {
//______________________________________________________________________________
template <> void InlineVector<bdm::SoHandle,4>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::InlineVector<bdm::SoHandle,4>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::InlineVector<bdm::SoHandle,4>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::InlineVector<bdm::SoHandle,4>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InlineVector<bdm::SoHandle,4>( (TRootIOCtor *)nullptr ) : new ::bdm::InlineVector<bdm::SoHandle,4>( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p) {
      delete ((::bdm::InlineVector<bdm::SoHandle,4>*)p);
   }
   static void deleteArray_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p) {
      delete [] ((::bdm::InlineVector<bdm::SoHandle,4>*)p);
   }
   static void destruct_bdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gR(void *p) {
      typedef ::bdm::InlineVector<bdm::SoHandle,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::InlineVector<bdm::SoHandle,4>

namespace bdm {
//______________________________________________________________________________
template <> void InlineVector<array<double,3>,4>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::InlineVector<array<double,3>,4>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::InlineVector<array<double,3>,4>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::InlineVector<array<double,3>,4>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InlineVector<array<double,3>,4>( (TRootIOCtor *)nullptr ) : new ::bdm::InlineVector<array<double,3>,4>( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p) {
      delete ((::bdm::InlineVector<array<double,3>,4>*)p);
   }
   static void deleteArray_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p) {
      delete [] ((::bdm::InlineVector<array<double,3>,4>*)p);
   }
   static void destruct_bdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gR(void *p) {
      typedef ::bdm::InlineVector<array<double,3>,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::InlineVector<array<double,3>,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion> : new ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>;
   }
   static void *newArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>[nElements] : new ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete ((::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void deleteArray_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      delete [] ((::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>*)p);
   }
   static void destruct_bdmcLcLCTListlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongR(void *p) {
      typedef ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > : new ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >;
   }
   static void *newArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements] : new ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete ((::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete [] ((::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void destruct_bdmcLcLdetailcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      typedef ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > : new ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >;
   }
   static void *newArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements] : new ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete ((::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete [] ((::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void destruct_bdmcLcLdetailcLcLToIndexlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      typedef ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > : new ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >;
   }
   static void *newArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements] : new ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete ((::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void deleteArray_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      delete [] ((::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >*)p);
   }
   static void destruct_bdmcLcLConvertToContainerTuplelEbdmcLcLSoacObdmcLcLCTListlEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRsPgRsPgR(void *p) {
      typedef ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >

namespace bdm {
//______________________________________________________________________________
template <> void ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > : new ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >;
   }
   static void *newArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >[nElements] : new ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLScalarSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > : new ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >;
   }
   static void *newArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >[nElements] : new ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLSoaSimulationObjectlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > : new ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >;
   }
   static void *newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >[nElements] : new ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > : new ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >;
   }
   static void *newArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >[nElements] : new ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLSimulationObjectImpllEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLSimulationObjectExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Capsule<bdm::CellExt> : new ::bdm::Capsule<bdm::CellExt>;
   }
   static void *newArray_bdmcLcLCapsulelEbdmcLcLCellExtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Capsule<bdm::CellExt>[nElements] : new ::bdm::Capsule<bdm::CellExt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p) {
      delete ((::bdm::Capsule<bdm::CellExt>*)p);
   }
   static void deleteArray_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p) {
      delete [] ((::bdm::Capsule<bdm::CellExt>*)p);
   }
   static void destruct_bdmcLcLCapsulelEbdmcLcLCellExtgR(void *p) {
      typedef ::bdm::Capsule<bdm::CellExt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Capsule<bdm::CellExt>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Soa> : new ::bdm::DefaultCTParam<bdm::Soa>;
   }
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Soa>[nElements] : new ::bdm::DefaultCTParam<bdm::Soa>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p) {
      delete ((::bdm::DefaultCTParam<bdm::Soa>*)p);
   }
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p) {
      delete [] ((::bdm::DefaultCTParam<bdm::Soa>*)p);
   }
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagR(void *p) {
      typedef ::bdm::DefaultCTParam<bdm::Soa> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultCTParam<bdm::Soa>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> : new ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>;
   }
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements] : new ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete ((::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete [] ((::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLSoagRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      typedef ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultCTParam<bdm::Soa>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Scalar> : new ::bdm::DefaultCTParam<bdm::Scalar>;
   }
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Scalar>[nElements] : new ::bdm::DefaultCTParam<bdm::Scalar>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p) {
      delete ((::bdm::DefaultCTParam<bdm::Scalar>*)p);
   }
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p) {
      delete [] ((::bdm::DefaultCTParam<bdm::Scalar>*)p);
   }
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargR(void *p) {
      typedef ::bdm::DefaultCTParam<bdm::Scalar> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultCTParam<bdm::Scalar>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> : new ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>;
   }
   static void *newArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements] : new ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete ((::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void deleteArray_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      delete [] ((::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>*)p);
   }
   static void destruct_bdmcLcLDefaultCTParamlEbdmcLcLScalargRcLcLCTMaplEbdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgRcO0gR(void *p) {
      typedef ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultCTParam<bdm::Scalar>::CTMap<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,14> : new ::bdm::FixedSizeVector<unsigned long,14>;
   }
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,14>[nElements] : new ::bdm::FixedSizeVector<unsigned long,14>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      delete ((::bdm::FixedSizeVector<unsigned long,14>*)p);
   }
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      delete [] ((::bdm::FixedSizeVector<unsigned long,14>*)p);
   }
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      typedef ::bdm::FixedSizeVector<unsigned long,14> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::FixedSizeVector<unsigned long,14>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27> : new ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>;
   }
   static void *newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>[nElements] : new ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p) {
      delete ((::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)p);
   }
   static void deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p) {
      delete [] ((::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>*)p);
   }
   static void destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxmUcO27gR(void *p) {
      typedef ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> : new ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>;
   }
   static void *newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>[nElements] : new ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      delete ((::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)p);
   }
   static void deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      delete [] ((::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)p);
   }
   static void destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      typedef ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14> : new ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>;
   }
   static void *newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>[nElements] : new ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p) {
      delete ((::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)p);
   }
   static void deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p) {
      delete [] ((::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>*)p);
   }
   static void destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEbdmcLcLSoHandlecO4gRcO14gR(void *p) {
      typedef ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14> : new ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>;
   }
   static void *newArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>[nElements] : new ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p) {
      delete ((::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)p);
   }
   static void deleteArray_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p) {
      delete [] ((::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>*)p);
   }
   static void destruct_bdmcLcLCircularBufferlEbdmcLcLInlineVectorlEarraylEdoublecO3gRcO4gRcO14gR(void *p) {
      typedef ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > : new ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >;
   }
   static void *newArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements] : new ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete ((::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void deleteArray_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete [] ((::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void destruct_bdmcLcLDisplacementOpCpulEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      typedef ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > : new ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >;
   }
   static void *newArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements] : new ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete ((::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void deleteArray_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete [] ((::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void destruct_bdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      typedef ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p) {
      delete ((::bdm::OpTimer<bdm::CommitOp>*)p);
   }
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p) {
      delete [] ((::bdm::OpTimer<bdm::CommitOp>*)p);
   }
   static void destruct_bdmcLcLOpTimerlEbdmcLcLCommitOpgR(void *p) {
      typedef ::bdm::OpTimer<bdm::CommitOp> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OpTimer<bdm::CommitOp>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p) {
      delete ((::bdm::OpTimer<bdm::BiologyModuleOp>*)p);
   }
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p) {
      delete [] ((::bdm::OpTimer<bdm::BiologyModuleOp>*)p);
   }
   static void destruct_bdmcLcLOpTimerlEbdmcLcLBiologyModuleOpgR(void *p) {
      typedef ::bdm::OpTimer<bdm::BiologyModuleOp> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OpTimer<bdm::BiologyModuleOp>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p) {
      delete ((::bdm::OpTimer<bdm::BoundSpace>*)p);
   }
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p) {
      delete [] ((::bdm::OpTimer<bdm::BoundSpace>*)p);
   }
   static void destruct_bdmcLcLOpTimerlEbdmcLcLBoundSpacegR(void *p) {
      typedef ::bdm::OpTimer<bdm::BoundSpace> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OpTimer<bdm::BoundSpace>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p) {
      delete ((::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)p);
   }
   static void deleteArray_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p) {
      delete [] ((::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >*)p);
   }
   static void destruct_bdmcLcLOpTimerlEbdmcLcLDisplacementOplEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRsPgR(void *p) {
      typedef ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete ((::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void deleteArray_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      delete [] ((::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >*)p);
   }
   static void destruct_bdmcLcLCatalystAdaptorlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgR(void *p) {
      typedef ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >

namespace bdm {
//______________________________________________________________________________
void KaliumSecretion::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::KaliumSecretion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::KaliumSecretion::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::KaliumSecretion::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLKaliumSecretion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::KaliumSecretion : new ::bdm::KaliumSecretion;
   }
   static void *newArray_bdmcLcLKaliumSecretion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::KaliumSecretion[nElements] : new ::bdm::KaliumSecretion[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLKaliumSecretion(void *p) {
      delete ((::bdm::KaliumSecretion*)p);
   }
   static void deleteArray_bdmcLcLKaliumSecretion(void *p) {
      delete [] ((::bdm::KaliumSecretion*)p);
   }
   static void destruct_bdmcLcLKaliumSecretion(void *p) {
      typedef ::bdm::KaliumSecretion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::KaliumSecretion

namespace bdm {
//______________________________________________________________________________
template <> void MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLScalargRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >

namespace bdm {
//______________________________________________________________________________
template <> void MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr ) : new ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete ((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void deleteArray_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      delete [] ((::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >*)p);
   }
   static void destruct_bdmcLcLMyCellExtlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRcObdmcLcLCapsulelEbdmcLcLMyCellExtgRsPgR(void *p) {
      typedef ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Capsule<bdm::MyCellExt> : new ::bdm::Capsule<bdm::MyCellExt>;
   }
   static void *newArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Capsule<bdm::MyCellExt>[nElements] : new ::bdm::Capsule<bdm::MyCellExt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p) {
      delete ((::bdm::Capsule<bdm::MyCellExt>*)p);
   }
   static void deleteArray_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p) {
      delete [] ((::bdm::Capsule<bdm::MyCellExt>*)p);
   }
   static void destruct_bdmcLcLCapsulelEbdmcLcLMyCellExtgR(void *p) {
      typedef ::bdm::Capsule<bdm::MyCellExt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Capsule<bdm::MyCellExt>

namespace bdm {
//______________________________________________________________________________
void GrowthModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::GrowthModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::GrowthModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::GrowthModule::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLGrowthModule(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::GrowthModule : new ::bdm::GrowthModule;
   }
   static void *newArray_bdmcLcLGrowthModule(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::GrowthModule[nElements] : new ::bdm::GrowthModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLGrowthModule(void *p) {
      delete ((::bdm::GrowthModule*)p);
   }
   static void deleteArray_bdmcLcLGrowthModule(void *p) {
      delete [] ((::bdm::GrowthModule*)p);
   }
   static void destruct_bdmcLcLGrowthModule(void *p) {
      typedef ::bdm::GrowthModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::GrowthModule

namespace ROOT {
   static TClass *vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_Dictionary();
   static void vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >*)
   {
      vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >", -2, "vector", 216,
                  typeid(vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >) );
      instance.SetNew(&new_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >*)0x0)->GetClass();
      vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > : new vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >;
   }
   static void *newArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >[nElements] : new vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p) {
      delete ((vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p) {
      delete [] ((vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >*)p);
   }
   static void destruct_vectorlEbdmcLcLVariantlEbdmcLcLGrowthModulecObdmcLcLKaliumSecretiongRsPgR(void *p) {
      typedef vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary();
   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p);
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoHandle>*)
   {
      vector<bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoHandle>", -2, "vector", 216,
                  typeid(vector<bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoHandle>) );
      instance.SetNew(&new_vectorlEbdmcLcLSoHandlegR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoHandlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoHandle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0)->GetClass();
      vectorlEbdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle> : new vector<bdm::SoHandle>;
   }
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle>[nElements] : new vector<bdm::SoHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete ((vector<bdm::SoHandle>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete [] ((vector<bdm::SoHandle>*)p);
   }
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p) {
      typedef vector<bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoHandle>

namespace ROOT {
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary();
   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLRandommUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLRandommUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p);
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Random*>*)
   {
      vector<bdm::Random*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Random*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Random*>", -2, "vector", 216,
                  typeid(vector<bdm::Random*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLRandommUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Random*>) );
      instance.SetNew(&new_vectorlEbdmcLcLRandommUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLRandommUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLRandommUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Random*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0)->GetClass();
      vectorlEbdmcLcLRandommUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLRandommUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*> : new vector<bdm::Random*>;
   }
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*>[nElements] : new vector<bdm::Random*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLRandommUgR(void *p) {
      delete ((vector<bdm::Random*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p) {
      delete [] ((vector<bdm::Random*>*)p);
   }
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p) {
      typedef vector<bdm::Random*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Random*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary();
   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Param::VisualizeDiffusion>*)
   {
      vector<bdm::Param::VisualizeDiffusion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Param::VisualizeDiffusion>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Param::VisualizeDiffusion>", -2, "vector", 216,
                  typeid(vector<bdm::Param::VisualizeDiffusion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Param::VisualizeDiffusion>) );
      instance.SetNew(&new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDelete(&delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Param::VisualizeDiffusion> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0)->GetClass();
      vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion> : new vector<bdm::Param::VisualizeDiffusion>;
   }
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion>[nElements] : new vector<bdm::Param::VisualizeDiffusion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete [] ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      typedef vector<bdm::Param::VisualizeDiffusion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Param::VisualizeDiffusion>

namespace ROOT {
   static TClass *vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary();
   static void vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);
   static void deleteArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);
   static void destruct_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)
   {
      vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>", -2, "vector", 216,
                  typeid(vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>) );
      instance.SetNew(&new_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)0x0)->GetClass();
      vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> : new vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>;
   }
   static void *newArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>[nElements] : new vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      delete ((vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      delete [] ((vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>*)p);
   }
   static void destruct_vectorlEbdmcLcLGridlEbdmcLcLSimulationlEbdmcLcLCompileTimeParamlEbdmcLcLSoagRsPgRsPgRcLcLBoxgR(void *p) {
      typedef vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>

namespace {
  void TriggerDictionaryInitialization_ClosedEdgeBug_dict_Impl() {
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
#line 1 "ClosedEdgeBug_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace bdm{struct __attribute__((annotate("$clingAutoload$backend.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Soa;}
namespace bdm{template <typename Backend = bdm::Soa> struct __attribute__((annotate("$clingAutoload$compile_time_param.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CompileTimeParam;
}
namespace bdm{template <typename TCompileTimeParam = bdm::CompileTimeParam<>, typename TDerived = char> class __attribute__((annotate("$clingAutoload$simulation_object_util.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  MyCellExt;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$random.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Random;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$resource_manager.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoHandle;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*Module)ATTRDUMP"))) GrowthModule;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$diffusion_biology_modules.h")))  KaliumSecretion;}
namespace bdm{template <typename ...Types> class __attribute__((annotate("$clingAutoload$variant.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Variant;
}
namespace bdm{template <typename T> class __attribute__((annotate("$clingAutoload$transactional_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  TransactionalVector;
}
namespace std{template <typename _Tp, std::size_t _Nm> struct __attribute__((annotate("$clingAutoload$array")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  array;
}
namespace bdm{struct __attribute__((annotate("$clingAutoload$backend.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Scalar;}
namespace std{class __attribute__((annotate("$clingAutoload$mutex")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  recursive_mutex;}
namespace bdm{template <typename Backend> struct __attribute__((annotate("$clingAutoload$type_util.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  is_soa;
}
namespace bdm{namespace detail{template <typename T, std::size_t Counter, typename ...Types> struct __attribute__((annotate("$clingAutoload$tuple_util.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  GetIndexImpl;
}}
namespace bdm{template <typename TCompileTimeParam = bdm::CompileTimeParam<>> class __attribute__((annotate("$clingAutoload$resource_manager.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ResourceManager;
}
namespace bdm{template <typename TCTParam = bdm::CompileTimeParam<>> struct __attribute__((annotate("$clingAutoload$simulation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Simulation;
}
namespace bdm{template <typename TSimulation = bdm::Simulation<>> class __attribute__((annotate("$clingAutoload$grid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Grid;
}
namespace bdm{template <typename TSimulation = bdm::Simulation<>> class __attribute__((annotate("$clingAutoload$scheduler.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Scheduler;
}
namespace bdm{template <typename T, std::size_t N> class __attribute__((annotate("$clingAutoload$inline_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InlineVector;
}
namespace bdm{template <typename ...Types> struct __attribute__((annotate("$clingAutoload$compile_time_list.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CTList;
}
namespace bdm{template <typename TBackend = bdm::Soa> struct __attribute__((annotate("$clingAutoload$compile_time_param.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  DefaultCTParam;
}
namespace bdm{template <typename T, std::size_t N> class __attribute__((annotate("$clingAutoload$fixed_size_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  FixedSizeVector;
}
namespace bdm{template <typename T, uint64_t N> class __attribute__((annotate("$clingAutoload$grid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CircularBuffer;
}
namespace bdm{template <typename TSimulation = bdm::Simulation<>> class __attribute__((annotate("$clingAutoload$displacement_op_cpu.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  DisplacementOpCpu;
}
namespace bdm{template <typename TSimulation = bdm::Simulation<>> class __attribute__((annotate("$clingAutoload$displacement_op.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  DisplacementOp;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$commit_op.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CommitOp;}
namespace bdm{template <typename TOp> struct __attribute__((annotate("$clingAutoload$op_timer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  OpTimer;
}
namespace bdm{struct __attribute__((annotate("$clingAutoload$biology_module_op.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  BiologyModuleOp;}
namespace bdm{class __attribute__((annotate("$clingAutoload$bound_space_op.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  BoundSpace;}
namespace bdm{template <typename TSimulation = bdm::Simulation<>> class __attribute__((annotate("$clingAutoload$visualization/catalyst_adaptor.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CatalystAdaptor;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ClosedEdgeBug_dict dictionary payload"

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
"bdm::CTList<bdm::GrowthModule,bdm::KaliumSecretion>", payloadCode, "@",
"bdm::Capsule<bdm::CellExt>", payloadCode, "@",
"bdm::Capsule<bdm::MyCellExt>", payloadCode, "@",
"bdm::CatalystAdaptor<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", payloadCode, "@",
"bdm::CellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::CellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::CircularBuffer<bdm::InlineVector<array<double,3>,4>,14>", payloadCode, "@",
"bdm::CircularBuffer<bdm::InlineVector<bdm::SoHandle,4>,14>", payloadCode, "@",
"bdm::CompileTimeParam<bdm::Scalar>", payloadCode, "@",
"bdm::CompileTimeParam<bdm::Soa>", payloadCode, "@",
"bdm::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", payloadCode, "@",
"bdm::DefaultCTParam<bdm::Scalar>", payloadCode, "@",
"bdm::DefaultCTParam<bdm::Soa>", payloadCode, "@",
"bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", payloadCode, "@",
"bdm::DisplacementOpCpu<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", payloadCode, "@",
"bdm::FixedSizeVector<const bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box*,27>", payloadCode, "@",
"bdm::FixedSizeVector<unsigned long,14>", payloadCode, "@",
"bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", payloadCode, "@",
"bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Adjacency", payloadCode, "@",
"bdm::GrowthModule", payloadCode, "@",
"bdm::InlineVector<array<double,3>,4>", payloadCode, "@",
"bdm::InlineVector<bdm::SoHandle,4>", payloadCode, "@",
"bdm::KaliumSecretion", payloadCode, "@",
"bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::OneElementArray<array<double,3> >", payloadCode, "@",
"bdm::OneElementArray<double>", payloadCode, "@",
"bdm::OneElementArray<unsigned int>", payloadCode, "@",
"bdm::OneElementArray<vector<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion> > >", payloadCode, "@",
"bdm::OpTimer<bdm::BiologyModuleOp>", payloadCode, "@",
"bdm::OpTimer<bdm::BoundSpace>", payloadCode, "@",
"bdm::OpTimer<bdm::CommitOp>", payloadCode, "@",
"bdm::OpTimer<bdm::DisplacementOp<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > > >", payloadCode, "@",
"bdm::ParallelResizeVector<bdm::Grid<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >::Box>", payloadCode, "@",
"bdm::ResourceManager<bdm::CompileTimeParam<bdm::Soa> >", payloadCode, "@",
"bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::Scheduler<bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> > >", payloadCode, "@",
"bdm::Simulation<bdm::CompileTimeParam<bdm::Soa> >", payloadCode, "@",
"bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::SimulationObjectExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::SimulationObjectImpl<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >", payloadCode, "@",
"bdm::TransactionalVector<int>", payloadCode, "@",
"bdm::detail::ConvertToContainerTuple<bdm::Soa,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", payloadCode, "@",
"bdm::detail::GetIndexImpl<bdm::KaliumSecretion,0,bdm::GrowthModule,bdm::KaliumSecretion>", payloadCode, "@",
"bdm::detail::GetIndexImpl<bdm::KaliumSecretion,1,bdm::KaliumSecretion>", payloadCode, "@",
"bdm::detail::GetIndexImpl<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,0,bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >", payloadCode, "@",
"bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,0,bdm::GrowthModule,bdm::KaliumSecretion>", payloadCode, "@",
"bdm::detail::GetIndexImpl<bdm::Variant<bdm::GrowthModule,bdm::KaliumSecretion>,1,bdm::KaliumSecretion>", payloadCode, "@",
"bdm::detail::ToIndex<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::CTList<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > > >", payloadCode, "@",
"bdm::is_soa<bdm::Soa>", payloadCode, "@",
"bdm::type_ternary_operator<false,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >", payloadCode, "@",
"bdm::type_ternary_operator<false,recursive_mutex&,recursive_mutex>", payloadCode, "@",
"bdm::type_ternary_operator<false,unsigned long&,unsigned long>", payloadCode, "@",
"bdm::type_ternary_operator<false,vector<unsigned long>&,vector<unsigned long> >", payloadCode, "@",
"bdm::type_ternary_operator<true,bdm::ScalarSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> >,bdm::SoaSimulationObject<bdm::CompileTimeParam<bdm::Scalar>,bdm::Capsule<bdm::MyCellExt> > >", payloadCode, "@",
"bdm::type_ternary_operator<true,recursive_mutex&,recursive_mutex>", payloadCode, "@",
"bdm::type_ternary_operator<true,unsigned long&,unsigned long>", payloadCode, "@",
"bdm::type_ternary_operator<true,vector<unsigned long>&,vector<unsigned long> >", payloadCode, "@",
"tuple<bdm::MyCellExt<bdm::CompileTimeParam<bdm::Soa>,bdm::Capsule<bdm::MyCellExt> > >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ClosedEdgeBug_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ClosedEdgeBug_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ClosedEdgeBug_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ClosedEdgeBug_dict() {
  TriggerDictionaryInitialization_ClosedEdgeBug_dict_Impl();
}
