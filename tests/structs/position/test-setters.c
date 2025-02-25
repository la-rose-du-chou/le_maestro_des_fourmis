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
    position_set_x(pos, 4);
    assert(pos->x == 4);
    position_set_y(pos, 3);
    assert(pos->y == 3);
    position_set_x_size(pos, 2);
    assert(pos->x_size == 2);
    position_set_y_size(pos, 1);
    assert(pos->y_size == 1);

    position_destroy(pos);
  }
	position_finish();
  return EXIT_SUCCESS;
}
