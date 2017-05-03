/******************************************************************************
	Code
******************************************************************************/

/******************************************************************************
	Include files
******************************************************************************/

#include "gsmManager.h"

#include <stddef.h>	/* NULL */
#include <stdio.h>

/******************************************************************************
	Definitions
******************************************************************************/

/******************************************************************************
	Variables
******************************************************************************/

/******************************************************************************
	Local function declarations
******************************************************************************/

static int powerOnSelfCheck( gsmManager_t* me )
{
	if( me == NULL )
	{
		return 1;
	}
	
	printf( "POST check...\n" );
	return 0;
}

static void enable( gsmManager_t* me )
{
	printf( "Enabled...\n" );
}

static void disable( gsmManager_t* me )
{
	printf( "Disabled...\n" );
}

static void sleep( gsmManager_t* me )
{
	printf( "Going to sleep...\n" );
}

static void wake( gsmManager_t* me )
{
	printf( "Woke up...\n" );
}

static void sentSMS( gsmManager_t* me, const char* recipientNum, const char* smsBody )
{
	printf( "SMS sent...\n" );
}

static void readSMS( gsmManager_t* me )
{
	printf( "SMS was read...\n" );
}

static void eraseAllPhonebookEntries( gsmManager_t* me )
{
	printf( "All phonebook entries erased...\n" );
}

static void writeNewPhonebookEntry( gsmManager_t* me )
{
	printf( "Phonebook entry added...\n" );
}

static void readPhonebookEntry( gsmManager_t* me )
{
	printf( "Phonebook entry was read...\n" );
}

static void gsmManager_init( gsmManager_t* obj )
{
	obj->powerOnSelfCheck = powerOnSelfCheck;
	
	obj->enable = enable;
	obj->disable = disable;
	obj->sleep = sleep;
	obj->wake = wake;
	
	obj->sentSMS = sentSMS;
	obj->readSMS = readSMS;
	
	obj->eraseAllPhonebookEntries = eraseAllPhonebookEntries;
	obj->writeNewPhonebookEntry = writeNewPhonebookEntry;
	obj->readPhonebookEntry = readPhonebookEntry;
}

/******************************************************************************
	Function definitions
******************************************************************************/

gsmManager_t gsmManager_create( void )
{
	gsmManager_t aux;
	gsmManager_init( &aux );
	return aux;
}