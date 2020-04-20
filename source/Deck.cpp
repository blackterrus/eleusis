#include "../include/Deck.h"
#include <iostream>
#include <random>

Deck::Deck()
{

}

Deck::~Deck()
{

}

void Deck::init()
{
  char suits[] = {67, 68, 72, 83, '\0'};
  char values[] = {50, 51, 52, 53, 54, 55, 56, 57, 74, 81, 75, 65, '\0'};

  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 12; j++)
    {
      deck_.push_back(Card(suits[i], values[j]));
    }
  }
  std::random_shuffle(deck_.begin(), deck_.end());
}
