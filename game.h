//Mia Armstrong
//Assignment 2
//Filename: game.h
/* This is the header file for the game class. The game class manages all the other classes in the program. */


#include "field.h"

class game
{
   public:
          game();
          ~game();
          game(const game & to_add);
          void start_game();
          void round();
          void end_game();
   protected:
          yard my_yard;
          player * players;
          field my_field;
};
          
