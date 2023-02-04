#pragma once
/******************************************************************************/
/* File   : ServiceBswM_Version.hpp                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEBSWM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICEBSWM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEBSWM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEBSWM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEBSWM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEBSWM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
