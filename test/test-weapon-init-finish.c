#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG

#endif

#include <assert.h>

#include "../src/structs/weapon.h"

int main(void){
    
    assert(weapon_init());
    assert(weapon_init());
    assert(weapon_init());

    assert(weapon_finish());
    assert(weapon_finish());
    assert(weapon_finish());

    assert(!weapon_finish());


    return EXIT_SUCCESS;
}

