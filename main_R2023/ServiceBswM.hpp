#pragma once
/******************************************************************************/
/* File   : ServiceBswM.hpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceBswM_ServiceNvM_Types.hpp"
#include "CfgServiceBswM.hpp"
#include "ServiceBswM_core.hpp"
#include "infServiceBswM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceBswM:
      INTERFACES_EXPORTED_SERVICEBSWM
      public abstract_module
   ,  public class_ServiceBswM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEBSWM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEBSWM_CONST,       SERVICEBSWM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEBSWM_CONFIG_DATA, SERVICEBSWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEBSWM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEBSWM_CODE) MainFunction   (void);
      SERVICEBSWM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceBswM, SERVICEBSWM_VAR) ServiceBswM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

