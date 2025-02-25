#ifndef POSITION_H
#define POSITION_H

#include <stdbool.h>

/*
  TODO : description of the position struct and what it can be used for
*/
typedef struct _Position Position;

extern bool position_init(void);
extern bool position_finish(void);

// creation and destruction functions

extern Position *position_create_full(const double x, const double y, const double x_size, const double y_size);
extern Position *position_fill_full(Position *position, const double x, const double y, const double x_size, const double y_size);
extern double position_default_x, position_default_y;
extern double position_default_x_size, position_default_y_size;
extern Position *position_create_default(void);
extern void position_destroy(Position *position);

// copy and clone functions

extern Position *position_copy(Position *dest, const Position *src);
extern Position *position_clone(const Position *src);

// getters

extern double position_get_x(const Position *position);
extern double position_get_y(const Position *position);
extern double position_get_x_size(const Position *position);
extern double position_get_y_size(const Position *position);

// setters

extern Position *position_set_x(Position *position, const double value);
extern Position *position_set_y(Position *position, const double value);
extern Position *position_set_x_size(Position *position, const double value);
extern Position *position_set_y_size(Position *position, const double value);

// modify values

extern Position *position_add_x(Position *position, const double value);
extern Position *position_add_y(Position *position, const double value);
extern Position *position_add_x_size(Position *position, const double value);
extern Position *position_add_y_size(Position *position, const double value);

// TODO : collisions (functions to check if two pos overlap)
// TODO : add tostring (maybe for debugging), fwrite and fread

#endif // POSITION_H