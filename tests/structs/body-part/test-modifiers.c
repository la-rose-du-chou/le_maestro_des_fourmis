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

    body_part_add_health(part, 23);
    assert(part->health == 33);
    body_part_add_protection(part, 56);
    assert(part->protection == 60);

    body_part_add_health(part, -3);
    assert(part->health == 30);
    body_part_add_protection(part, -6);
    assert(part->protection == 54);

    body_part_destroy(part);
  }
	body_part_finish();
  return EXIT_SUCCESS;
}
