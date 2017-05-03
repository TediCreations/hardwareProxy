/******************************************************************************
	About
******************************************************************************/

/**
 * \file gsmManager.h
 *
 * \brief	GSM hardware adapter
 *
 * Created:			30/04/2017
 *
 * \author	Elias Kanelis	hkanelhs@yahoo.gr
 */

/**
* \defgroup	Ungrouped	Ungrouped
*
* \code	#include <gsmManager.h>	\endcode
*/

/******************************************************************************
	Code
******************************************************************************/

#ifndef GSMMANAGER_H_ONLY_ONE_INCLUDE_SAFETY
#define GSMMANAGER_H_ONLY_ONE_INCLUDE_SAFETY

/******************************************************************************
	Type definitions
******************************************************************************/

typedef struct gsmManager
{
	/* Basic */
	//int (*initialize)();
	int (*powerOnSelfCheck)();
	
	/* Power */
	void (*enable)();
	void (*disable)();
	void (*sleep)();
	void (*wake)();
	
	/* SMS */
	void (*sentSMS)( struct gsmManager* me, const char* recipientNum, const char* smsBody );
	void (*readSMS)();
	
	/* Phonebook */
	void (*eraseAllPhonebookEntries)();
	void (*writeNewPhonebookEntry)();
	void (*readPhonebookEntry)();
	
	/* Localization */
	//void (*getLocation)();//TODO: Add feature: Mobile Network Geolocation
} gsmManager_t;

/******************************************************************************
	Function declarations
******************************************************************************/

gsmManager_t gsmManager_create( void );

#endif /* GSMMANAGER_H_ONLY_ONE_INCLUDE_SAFETY */
