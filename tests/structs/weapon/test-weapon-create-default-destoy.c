#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG

#endif

#include <assert.h>
#include <string.h>

#include "../../../src/structs/weapon.h"
#include "../../../src/structs/weapon.inc"

int main(void){
    weapon_init();
    {
        char* name= "fourEyes";
        int precision = 100, damage = 4, perforation = 0, range = 2, ammo_capacity = 404, reload_time =0.404;
        unsigned int noise = 404;
        Weapon* ip = weapon_create_default();
        Weapon* fourEyes = weapon_create(name, precision, perforation, range, ammo_capacity, reload_time, noise);

        //Test of the create function

        assert(strcmp(fourEyes->name, name) == 0); 
        assert(fourEyes->precision == precision);
        assert(fourEyes->perforation == perforation); 
        assert(fourEyes->range == range);
        assert(fourEyes->ammo_capacity == ammo_capacity);
        assert(fourEyes->reload_time == reload_time);
        assert(fourEyes->noise == noise);

        //Test of the create_default function
                
        assert(strcmp(ip->name, "") == 0); 
        assert(ip->precision == 0);
        assert(ip->perforation == 0); 
        assert(ip->range == 0);
        assert(ip->ammo_capacity == 0);
        assert(ip->reload_time == 0.0);
        assert(ip->noise == 0);

        
        //Test of destroy function
        weapon_destroy(fourEyes);
        weapon_destroy(ip);
    }
    weapon_finish();

    return EXIT_SUCCESS;
}
