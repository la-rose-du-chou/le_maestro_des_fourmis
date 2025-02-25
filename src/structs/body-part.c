#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "./body-part.h"
#include "./body-part.inc"

static int counter = 0;

bool body_part_init(void) {
  if (!counter++) assert(printf("Body Part initialized\n"));
  return true;
}

bool body_part_finish(void) {
  if (!--counter) assert(printf("Body Part finished\n"));
  if (counter >= 0) return true;
  return false;
}

// creation and destruction functions



// copy and clone functions



// getters