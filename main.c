#include "hardwareProxy.h"
#include "gsmManager.h"

int main(int argc, char **argv)
{
	hardware_t abs = hardware_create();
	abs.set_name( &abs, "Tedi" );
	abs.set_description( &abs, "Generic product" );
	abs.set_id( &abs, 1 );
	abs.display( &abs );
	
	abs.initialize( &abs );
	abs.enable( &abs );
	abs.disable( &abs );
	
	hardwareData_t data;
	data.on_off = 1;
	abs.configure( &abs, data );
	
	gsmManager_t gsm = gsmManager_create();
	
	gsm.powerOnSelfCheck( &gsm );
	
	gsm.enable( &gsm );
	gsm.disable( &gsm );
	gsm.sleep( &gsm );
	gsm.wake( &gsm );
	
	gsm.sentSMS( &gsm, "6973567226", "Hello" );
	gsm.readSMS( &gsm );
	
	gsm.eraseAllPhonebookEntries( &gsm );
	gsm.writeNewPhonebookEntry( &gsm );
	gsm.readPhonebookEntry( &gsm );
	
	return 0;
}
