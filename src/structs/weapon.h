
#ifndef WEAPON_H_
#define WEAPON_H_

#include <stdbool.h>

typedef struct _Weapon Weapon;


extern bool weapon_init(void);//TODO
extern bool weapon_finish(void);//TODO

extern Weapon* weapon_create(char* name, int precision, int perforation, int range,int ammo_capacity,float reload_time, unsigned int noise);//TODO
extern Weapon* weapon_create_default();//TODO

extern void* weapon_destroy(Weapon* weapon);//TODO

extern char* weapon_get_name(Weapon* weapon);//TODO
extern int weapon_get_precision(Weapon* weapon);//TODO
extern int weapon_get_damage(Weapon* weapon);//TODO
extern int weapon_get_perforation(Weapon* weapon);//TODO
extern int weapon_get_range(Weapon* weapon);//TODO
extern int weapon_get_ammo_capacity(Weapon* weapon);//TODO
extern float weapon_get_reload_time(Weapon* weapon);
extern unsigned int weapon_get_noise(Weapon* weapon);//TODO

extern void weapon_set_name(Weapon* weapon, char* name);//TODO
extern void weapon_set_precision(Weapon* weapon, int precision);//TODO
extern void weapon_set_damage(Weapon* weapon, int damage);//TODO
extern void weapon_set_perforation(Weapon* weapon, int perforation);//TODO
extern void weapon_set_range(Weapon* weapon, int range);//TODO
extern void weapon_set_ammo_capacity(Weapon* weapon, int ammo_capacity);//TODO
extern void weapon_set_reload_time(Weapon* weapon, float reload_time);//TODO
extern void weapon_set_noise(Weapon* weapon, unsigned int noise);//TODO



#endif