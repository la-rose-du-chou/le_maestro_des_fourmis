#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "../../../src/structs/body-part.h"
#include "../../../src/structs/body-part.inc"

int main(void) {
  body_part_init();
	{
    BodyPart *part = body_part_create_full(TORSO, 10, 4);
    
    assert(body_part_get_section(part) == part->section);
    assert(body_part_get_health(part) == part->health);
    assert(body_part_get_protection(part) == part->protection);

    body_part_destroy(part);
  }
	body_part_finish();
  return EXIT_SUCCESS;
}
