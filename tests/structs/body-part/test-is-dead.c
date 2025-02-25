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

    assert(!body_part_is_dead(part));
    part->health = 0;
    assert(body_part_is_dead(part));
    part->health = -1;
    assert(!body_part_is_dead(part));

    body_part_destroy(part);
  }
	body_part_finish();
  return EXIT_SUCCESS;
}
