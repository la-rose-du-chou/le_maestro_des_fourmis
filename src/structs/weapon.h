
#ifndef WEAPON_H_
#define WEAPON_H_

#include <stdbool.h>

typedef struct _Weapon Weapon;


extern bool weapon_init(void);
extern bool weapon_finish(void);

extern Weapon* weapon_create(char* name, int precision, int perforation, int range,int ammo_capacity,float reload_time, unsigned int noise);//TODO
extern Weapon* weapon_create_default();

extern void weapon_destroy(Weapon* weapon);

extern char* weapon_get_name(Weapon* weapon);
extern int weapon_get_precision(Weapon* weapon);
extern int weapon_get_damage(Weapon* weapon);
extern int weapon_get_perforation(Weapon* weapon);
extern int weapon_get_range(Weapon* weapon);
extern int weapon_get_ammo_capacity(Weapon* weapon);
extern float weapon_get_reload_time(Weapon* weapon);
extern unsigned int weapon_get_noise(Weapon* weapon);

extern void weapon_set_name(Weapon* weapon, char* name);
extern void weapon_set_precision(Weapon* weapon, int precision);
extern void weapon_set_damage(Weapon* weapon, int damage);
extern void weapon_set_perforation(Weapon* weapon, int perforation);
extern void weapon_set_range(Weapon* weapon, int range);
extern void weapon_set_ammo_capacity(Weapon* weapon, int ammo_capacity);
extern void weapon_set_reload_time(Weapon* weapon, float reload_time);
extern void weapon_set_noise(Weapon* weapon, unsigned int noise);

#endif