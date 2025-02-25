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
    assert(part->section == TORSO);
    assert(part->health == 10);
    assert(part->protection == 4);

    part = body_part_fill_full(part, HEAD, 34, 2);
    assert(part->section == HEAD);
    assert(part->health == 34);
    assert(part->protection == 2);

    part = body_part_create_default();
    assert(part->section == body_part_default_body_section);
    assert(part->health == body_part_default_health);
    assert(part->protection == body_part_default_protection);

    body_part_default_body_section = L_LEG;
    body_part_default_health = 67;
    body_part_default_protection = 98;

    part = body_part_create_default();
    assert(part->section == L_LEG);
    assert(part->health == 67);
    assert(part->protection == 98);

    body_part_destroy(part);
  }
	body_part_finish();
  return EXIT_SUCCESS;
}
