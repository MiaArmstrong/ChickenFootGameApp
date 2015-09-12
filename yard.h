//Mia Armstrong CS202
//Assignment 1 
/*This is the header file for the yard class for the chicken bone game program. The yard "has a" LLL of hands (arrays of bones). The yard class creates a set of double nine dominoes (bones) and assigns letter and number coordinates for each domino. The letter coordinates are handled by the nodes and the numbers are the index of the array. When a bone has been removed it's coordinates are replaced by an X. */

#include "player.h"


class yard
{
   public:
          //set up a lll of hand objects
          yard();
          ~yard();
          void create(); //creates a new yard of bones
          void display_all()const;
          void shuffle(); //shuffles the yard
          void remove(bone & to_hand); //calls the hand function to remove a bone from the yard to the player's hand.
          void start_hand(hand & to_add);

   protected:
         y_node * head;
         int top_index;
        
};

