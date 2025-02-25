#include <stdlib.h>

#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>

#include "../../../src/structs/body-part.h"

int main(void) {
  assert(body_part_init());
	assert(body_part_init());
	assert(body_part_init());

	assert(body_part_finish());
	assert(body_part_finish());
	assert(body_part_finish());
	assert(!body_part_finish());

  return EXIT_SUCCESS;
}