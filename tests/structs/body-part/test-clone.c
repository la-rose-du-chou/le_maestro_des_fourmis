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
    BodyPart *part2 = body_part_clone(part);

    assert(part2->section == part->section);
    assert(part2->health == part->health);
    assert(part2->protection == part->protection);

    body_part_destroy(part);
    body_part_destroy(part2);
  }
	body_part_finish();
  return EXIT_SUCCESS;
}
