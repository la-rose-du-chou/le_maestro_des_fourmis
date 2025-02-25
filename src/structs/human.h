#ifndef HUMAN_H
#define HUMAN_H

#include <stdbool.h>

/*
  TODO : description of the BodyPart struct and what it can be used for
*/
typedef struct _Human Human;

typedef enum _Role Role;
enum _Role {
  CIVILIAN = 0,
  ENEMY = 1,
  PLAYER = 2
};

extern bool human_init(void);
extern bool human_finish(void);

// creation and destruction functions

// copy and clone functions

// getters

// setters

#endif