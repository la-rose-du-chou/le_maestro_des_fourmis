#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "../../../src/structs/position.h"
#include "../../../src/structs/position.inc"

int main(void) {
  assert(position_init());
	{
    Position *pos = position_create_full(1, 2, 3, 4);
    assert(pos->x == 1);
    assert(pos->y == 2);
    assert(pos->x_size == 3);
    assert(pos->y_size == 4);

    pos = position_fill_full(pos, 4, 3, 2, 1);
    assert(pos->x == 4);
    assert(pos->y == 3);
    assert(pos->x_size == 2);
    assert(pos->y_size == 1);

    position_default_x = 9;
    position_default_y = 8;
    position_default_x_size = 7;
    position_default_y_size = 6;

    pos = position_create_default();
    assert(pos->x == 9);
    assert(pos->y == 8);
    assert(pos->x_size == 7);
    assert(pos->y_size == 6);

    position_destroy(pos);
  }
	assert(position_finish());
  return EXIT_SUCCESS;
}
