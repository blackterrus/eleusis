#ifndef GAMEDEFS_H_
#define GAMEDEFS_H_

struct Card
{
  Card(char suit, char value)
  : suit_(suit),
    value_(value)
  {}

  char suit_;
  char value_;
};

#endif
