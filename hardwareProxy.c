/******************************************************************************
	Code
******************************************************************************/

/******************************************************************************
	Include files
******************************************************************************/

#include "hardwareProxy.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/******************************************************************************
	Definitions
******************************************************************************/

/******************************************************************************
	Variables
******************************************************************************/

/******************************************************************************
	Local function declarations
******************************************************************************/

static void initialize( hardware_t *me )
{
	printf( "Hardware initialized...\n" );
}

static void enable( hardware_t* me )
{
	printf( "Hardware enabled...\n" );
}

static void disable( hardware_t* me )
{
	printf( "Hardware disabled...\n" );
}

static void configure( hardware_t* me, const hardwareData_t data )
{
	if( data.on_off )
	{
		printf( "Hardware configuration on...\n" );
	}
	else
	{
		printf( "Hardware configuration off...\n" );
	}
}

static void set_id( hardware_t* me, int id )
{
	me->id = id;
}

static void set_name( hardware_t* me, char *name )
{
	strcpy( me->name, name);
}

static void set_description( hardware_t* me, char *description )
{
	strcpy( me->description, description);
}

static int get_id( hardware_t* me )
{
	return me->id;    
}

static char* get_name( hardware_t* me )
{
	return me->name;  
}

static char* get_description( hardware_t* me )
{
	return me->description;   
}

static void display( hardware_t* me )
{
	printf( "-Hardware-\n" ); 
	printf( "id: %d\n", me->get_id( me ) ); 
	printf( "name: %s\n", me->get_name( me ) ); 
	printf( "description: %s\n", me->get_description( me ) );   
	printf( "\n" );
}

static void hardware_init( hardware_t* obj )
{
	obj->initialize = initialize;
	obj->enable = enable;
	obj->disable = disable;
	obj->configure = configure;
	
	obj->set_id = set_id;
	obj->set_name = set_name;
	obj->set_description = set_description; 
	obj->get_id = get_id;
	obj->get_name = get_name;
	obj->get_description = get_description;
	obj->display = display;
}

/******************************************************************************
	Function definitions
******************************************************************************/

hardware_t hardware_create( void )
{
	hardware_t aux;
	hardware_init( &aux );
	return aux;
}