#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "../../../src/structs/position.h"

int main(void) {
  assert(position_init());
	assert(position_init());
	assert(position_init());

	assert(position_finish());
	assert(position_finish());
	assert(position_finish());
	assert(!position_finish());

  return EXIT_SUCCESS;
}