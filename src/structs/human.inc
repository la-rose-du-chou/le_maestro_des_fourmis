struct _Human {
  int sanity;
  double direction;
  BodyPart body_parts[];
  Role role;
  Weapon weapon;
  pid_t pid;
  // TODO : State state
}