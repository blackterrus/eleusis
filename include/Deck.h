#ifndef DECK_H_
#define DECK_H_

#include <vector>

#include "GameDefs.h"

typedef std::vector<struct Card> deck;

class Deck
{
  public:
    Deck();
    ~Deck();
    void init();

  protected:

  private:
    deck deck_;
};

#endif
