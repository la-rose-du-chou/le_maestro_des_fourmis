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
    
    assert(position_get_x(pos) == pos->x);
    assert(position_get_y(pos) == pos->y);
    assert(position_get_x_size(pos) == pos->x_size);
    assert(position_get_y_size(pos) == pos->y_size);

    position_destroy(pos);
  }
	assert(position_finish());
  return EXIT_SUCCESS;
}
