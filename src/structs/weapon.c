#include "./weapon.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "./weapon.inc"

static int counter = 0;


static void _verify(void) {
    assert(counter == 0);
  }
  

bool weapon_init(void){
    static bool first = true;
    if (first) {
      atexit(_verify);
      first = false;
    }
    if (!counter++) {
      assert(printf("Weapon initialised\n"));
    }
    return true;
}


bool weapon_finish(void) {
    if (counter) {
      if (!--counter) {
        assert(printf("Weapon finished\n"));
      }
      return true;
    } else {
      return false;
    }
  }


Weapon* weapon_create(char* name, int precision, int perforation, int range,int ammo_capacity,float reload_time, unsigned int noise){
    Weapon* new = malloc(sizeof(Weapon));
    if (new != NULL)
    {
        new->name = name;
        new->precision = precision;
        new->perforation = perforation;
        new->range = range;
        new->ammo_capacity = ammo_capacity;
        new->reload_time = reload_time;
        new->noise = noise;
    }
    return new;
    }

Weapon* weapon_create_default(){
    return weapon_create("",0,0,0,0,0.0,0);
  }


char* weapon_get_name(Weapon* weapon){
    return weapon->name;}

int weapon_get_damage(Weapon* weapon){
    return weapon->damage;
}

int weapon_get_precision(Weapon* weapon){
        return weapon->precision;
    }

int weapon_get_precision(Weapon* weapon){
    return weapon->perforation;
}

int weapon_get_range(Weapon* weapon){
    return weapon->range;
    }
    
int weapon_get_ammo_capacity(Weapon* weapon){
    return weapon->ammo_capacity;   
}
    
float weapon_get_reload_time(Weapon* weapon){
    return weapon->reload_time;
    }

unsigned int weapon_get_noise(Weapon* weapon){
    return weapon->noise;
}
        

void weapon_set_name(Weapon* weapon,char* name){
    weapon->name = name;
}


void weapon_set_precision(Weapon* weapon,int precision){
    weapon->precision = precision ;
}


void weapon_set_damage(Weapon* weapon, int damage){
    weapon->damage = damage;
}


void weapon_set_perforation(Weapon* weapon, int perforation){
    weapon->perforation = perforation ;
}


void weapon_set_ammo_capacity(Weapon* weapon, int ammo_capacity){
    weapon->ammo_capacity = ammo_capacity;
}


void weapon_set_reload_time(Weapon* weapon,float reload_time){
    weapon->reload_time = reload_time;
}


void weapon_set_noise(Weapon* weapon, unsigned int noise){
    weapon->noise = noise;
}