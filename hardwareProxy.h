/******************************************************************************
	About
******************************************************************************/

//TODO: Doxygen the about section in file hardwareProxy.h

/**
 * \file hardwareProxy.h
 *
 * \brief	TODO: Write brief
 *
 * Created:			30/04/2017
 *
 * \author	Elias Kanelis	hkanelhs@yahoo.gr
 */

/**
* \defgroup	Ungrouped	Ungrouped
*
* \code	#include <hardwareProxy.h>	\endcode
*/

/******************************************************************************
	Code
******************************************************************************/

#ifndef HARDWAREPROXY_H_ONLY_ONE_INCLUDE_SAFETY
#define HARDWAREPROXY_H_ONLY_ONE_INCLUDE_SAFETY

/******************************************************************************
	Include files
******************************************************************************/

#include <stdint.h>	/* uint32_t */

/******************************************************************************
	Custom definitions
******************************************************************************/


/*  ---   DO NOT TOUCH BELOW THIS LINE!   ---  */

/******************************************************************************
	Definitions
******************************************************************************/

/******************************************************************************
	Type definitions
******************************************************************************/

typedef struct hardwareData
{
	/*  */
	int on_off;
	
} hardwareData_t;



typedef struct hardware
{
	/*  */
	uint32_t itsAddress;
	
	int id;
	char name[1000];
	char description[1000];
	
	/* Methods */
	void (*initialize)();
	void (*enable)();
	void (*disable)();
	void (*configure)();
	
	void (*set_id)();
	void (*set_name)();
	void (*set_description)();  
	int (*get_id)();    
	char *(*get_name)();    
	char *(*get_description)(); 
	void (*display)();  
} hardware_t;

/******************************************************************************
	Function declarations
******************************************************************************/

hardware_t hardware_create( void );

#endif /* HARDWAREPROXY_H_ONLY_ONE_INCLUDE_SAFETY */
