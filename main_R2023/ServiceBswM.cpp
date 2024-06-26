/******************************************************************************/
/* File   : ServiceBswM.cpp                                                   */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceBswM.hpp"
#include "infServiceBswM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceBswM, SERVICEBSWM_VAR) ServiceBswM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEBSWM_CONST,       SERVICEBSWM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEBSWM_CONFIG_DATA, SERVICEBSWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::DeInitFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::MainFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

// ServiceEcuM_Init.SelectShutdownTarget(...);
// ServiceEcuM_Init.GoDownHaltPoll(...);

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentWakeupSources(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::PartitionRestarted(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentIcomConfiguration(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentPNCMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::InitiateReset(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ApplicationUpdated(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentWakeup(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::McalPortGroupMcalLinkStateChg(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::BroadcastStatus(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::StateChangeNotification(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentSchedule(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::RequestMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CarWakeUpIndication(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentBlockMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentJobMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ClientServiceCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ConsumedEventGroupCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::EventHandlerCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::RequestPartitionReset(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

