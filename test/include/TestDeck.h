#ifndef TESTDECK_H_
#define TESTDECK_H_

#include "../../include/Deck.h"

class TestDeck
{
  public:
    TestDeck();
    ~TestDeck();
    bool start();
    bool testInit();

  protected:

  private:
    Deck * mDeck;
};

#endif
