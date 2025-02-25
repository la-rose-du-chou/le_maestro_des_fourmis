#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "../../../src/structs/position.h"
#include "../../../src/structs/position.inc"

int main(void) {
  position_init();
	{
    Position *pos = position_create_full(1, 2, 3, 4);
    Position *pos2 = position_clone(pos);

    assert(pos2->x = pos->x);
    assert(pos2->y = pos->y);
    assert(pos2->x_size = pos->x_size);
    assert(pos2->y_size = pos->y_size);

    position_destroy(pos);
    position_destroy(pos2);
  }
	position_finish();
  return EXIT_SUCCESS;
}
