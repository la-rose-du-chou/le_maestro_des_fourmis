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

    assert(position_add_x(pos, 4) == pos);
    assert(pos->x == 5);
    assert(position_add_y(pos, 3) == pos);
    assert(pos->y == 5);
    assert(position_add_x_size(pos, 2) == pos);
    assert(pos->x_size == 5);
    assert(position_add_y_size(pos, 1) == pos);
    assert(pos->y_size == 5);

    assert(position_add_x(pos, -4) == pos);
    assert(pos->x == 1);
    assert(position_add_y(pos, -3) == pos);
    assert(pos->y == 2);
    assert(position_add_x_size(pos, -2) == pos);
    assert(pos->x_size == 3);
    assert(position_add_y_size(pos, -1) == pos);
    assert(pos->y_size == 4);

    position_destroy(pos);
  }
	assert(position_finish());
  return EXIT_SUCCESS;
}
