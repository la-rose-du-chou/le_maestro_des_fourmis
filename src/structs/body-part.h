#ifndef BODY_PART_H
#define BODY_PART_H

#include <stdbool.h>

/*
  TODO : description of the BodyPart struct and what it can be used for
*/
typedef struct _BodyPart BodyPart;

typedef enum _BodySection BodySection;
enum _BodySection {
  HEAD = 0,
  L_ARM = 1,
  R_ARM = 2,
  TORSO = 3,
  L_LEG = 4,
  R_LEG = 5
};

extern bool body_part_init(void);
extern bool body_part_finish(void);

// creation and destruction functions

extern BodyPart *body_part_create_full(const BodySection section, const int health, const int protection);
extern BodyPart *body_part_fill_full(BodyPart body_part, BodySection section, const int health, const int protection);
extern int body_part_default_health, body_part_default_protection;
extern BodySection body_part_default__body_section = BodySection::HEAD;
extern BodyPart *body_part_create_default(void);
extern void body_part_destroy(BodyPart *body_part);

// copy and clone functions

extern BodyPart *body_part_copy(BodyPart *dest, const BodyPart *src);
extern BodyPart *body_part_clone(const BodyPart *src);

// getters

extern BodySection body_part_get_secton(BodyPart *body_part);
extern int body_part_get_health(BodyPart *body_part);
extern int body_part_get_protection(BodyPart *body_part);

// TODO : add setters
// TODO : add functions to calc damage (using health and protection)

#endif // BODY_PART_H