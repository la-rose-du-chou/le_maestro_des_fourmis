#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG

#endif

#include <assert.h>
#include <string.h>


#include "../../../src/structs/weapon.h"

int main(void){

    Weapon* ip = weapon_create_default();

    int precision = 100, damage = 4, perforation = 0, range = 2, ammo_capacity = 404, reload_time =0.404;
    unsigned int noise = 404;

    weapon_set_name(ip,"ip");
    weapon_set_damage(ip,damage);
    weapon_set_precision(ip,precision);
    weapon_set_perforation(ip,perforation);
    weapon_set_range(ip, range);
    weapon_set_ammo_capacity(ip,ammo_capacity);
    weapon_set_reload_time(ip,reload_time);
    weapon_set_noise(ip,noise);

    assert(strcmp(weapon_get_name(ip), "ip")==0); 
    assert(weapon_get_precision(ip) == precision);
    assert(weapon_get_perforation(ip) == perforation); 
    assert(weapon_get_range(ip) == range);
    assert(weapon_get_ammo_capacity(ip) == ammo_capacity);
    assert(weapon_get_reload_time(ip) == reload_time);
    assert(weapon_get_noise(ip) == noise);

    return EXIT_SUCCESS;
}
