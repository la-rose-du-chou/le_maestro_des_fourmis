#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG

#endif

#include <assert.h>

#include "../src/structs/weapon.h"

int main(void){
    weapon_init();
    {
        char* name= "fourEyes";
        int precision = 100, damage = 4, perforation = 0, range = 2, ammo_capacity = 404, reload_time =0.404;
        unsigned int noise = 404;

        Weapon* fourEyes = weapon_create(name, precision, perforation, range, ammo_capacity, reload_time, noise);
        
        //Test of the get function
        assert(strcmp(weapon_get_name(fourEyes), name)==0); 
        assert(weapon_get_precision(fourEyes) == precision);
        assert(weapon_get_perforation(fourEyes) == perforation); 
        assert(weapon_get_range(fourEyes) == range);
        assert(weapon_get_ammo_capacity(fourEyes) == ammo_capacity);
        assert(weapon_get_reload_time(fourEyes) == reload_time);
        assert(weapon_get_noise(fourEyes) == noise);

        weapon_destroy(fourEyes);
    }
    weapon_finish();

    return EXIT_SUCCESS;
}
