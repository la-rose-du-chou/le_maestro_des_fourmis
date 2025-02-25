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

BodyPart *body_part_create_full(const BodySection section, const int health, const int protection) {
  assert(counter > 0);
  BodyPart *body_part = malloc(sizeof (BodyPart));
  if (body_part != NULL) {
    body_part->section = section;
    body_part->health = health;
    body_part->protection = protection;
  }
  return body_part;
}

BodyPart *body_part_fill_full(BodyPart *body_part, const BodySection section, const int health, const int protection) {
  assert(counter > 0);
  body_part->section = section;
  body_part->health = health;
  body_part->protection = protection;
  return body_part;
}

int body_part_default_health = 100, body_part_default_protection = 100;
BodySection body_part_default_body_section = HEAD;

BodyPart *body_part_create_default(void) { 
  assert(counter > 0);
  return body_part_create_full(body_part_default_body_section, body_part_default_health, body_part_default_protection); 
}

void body_part_destroy(BodyPart *body_part) {
  assert(counter > 0);
  free(body_part);
}

// copy and clone functions

BodyPart *body_part_copy(BodyPart *dest, const BodyPart *src) {
  dest->section = src->section;
  dest->health = src->health;
  dest->protection = src->protection;
  return dest;
}

BodyPart *body_part_clone(const BodyPart *src) { return body_part_copy(malloc(sizeof (BodyPart)), src); }

// getters

BodySection body_part_get_section(const BodyPart *body_part) { return body_part->section; }

int body_part_get_health(const BodyPart *body_part) { return body_part->health; }

int body_part_get_protection(const BodyPart *body_part) { return body_part->protection; }

// setters

BodyPart *body_part_set_health(BodyPart *body_part, const int value) {
  body_part->health = value;
  return body_part;
}

BodyPart *body_part_set_protection(BodyPart *body_part, const int value) {
  body_part->protection = value;
  return body_part;
}

// modify values

BodyPart *body_part_add_health(BodyPart *body_part, const int value) {
  body_part->health += value;
  return body_part;
}

BodyPart *body_part_add_protection(BodyPart *body_part, const int value) {
  body_part->protection += value;
  return body_part;
}

// damage function

BodyPart *body_part_take_damage(BodyPart *body_part, const int value) {
  // TODO : decide of a ratio to remove health depending on the quantity of protection
  return body_part;
}

// verify death

bool body_part_is_dead(BodyPart *body_part) { return body_part->health <= 0; }