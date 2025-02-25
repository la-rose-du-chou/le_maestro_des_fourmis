#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "./position.h"
#include "./position.inc"

static int counter = 0;

bool position_init(void) {
  if (!counter++) assert(printf("Position initialized\n"));
  return true;
}

bool position_finish(void) {
  if (!--counter) assert(printf("Position finished\n"));
  if (counter >= 0) return true;
  return false;
}

// creation and destruction functions

Position *position_create_full(const double x, const double y, const double x_size, const double y_size) {
  assert(counter > 0);
  Position *position = malloc(sizeof (Position));
  if (position != NULL) {
    position->x = x;
    position->y = y;
    position->x_size = x_size;
    position->y_size = y_size;
  }
  return position;
}

Position *position_fill_full(Position *position, const double x, const double y, const double x_size, const double y_size) {
  assert(counter > 0);
  position->x = x;
  position->y = y;
  position->x_size = x_size;
  position->y_size = y_size;
  return position;
}

double position_default_x, position_default_y = 0;
double position_default_x_size, position_default_y_size = 1;

Position *position_create_default(void) {
  assert(counter > 0);
  return position_create_full(position_default_x, position_default_y, position_default_x_size, position_default_y_size);
}

void position_destroy(Position *position) {
  assert(counter > 0);
  free(position);
}

// copy and clone functions

Position *position_copy(Position *dest, const Position *src) {
  dest->x = src->x;
  dest->y = src->y;
  dest->x_size = src->x_size;
  dest->y_size = src->y_size;
  return dest;
}

Position *position_clone(const Position *src) { return position_copy(malloc(sizeof (Position)), src); }

// getters

double position_get_x(const Position *position) { return position->x; }

double position_get_y(const Position *position) { return position->y; }

double position_get_x_size(const Position *position) { return position->x_size; }

double position_get_y_size(const Position *position) { return position->y_size; }

// setters

Position *position_set_x(Position *position, const double value) { 
  position->x = value;
  return position; 
}

Position *position_set_y(Position *position, const double value) { 
  position->y = value;
  return position; 
}

Position *position_set_x_size(Position *position, const double value) { 
  position->x_size = value;
  return position; 
}

Position *position_set_y_size(Position *position, const double value) { 
  position->y_size = value;
  return position; 
}