//Mia Armstrong CS202
//Assignment 1 
/*This is the header file for the bone class for the chicken bone game program. The bone is a set of two integers between 1-9 which are generated as a set of double nine dominoes accounting for each in the set is the job of the yard class. Each bone also has a state flag, a connections flag: to determine how many other bones can be connected to it, and a connected flag, to be used for regular, not double, bones to determine which end is already connected and which is free.*/

using namespace std;
#include <cctype>
#include <iostream>
#include <cstring>


class bone
{
   public:
          bone();
          ~bone(); 
          void remove();
          void display();
          void create_bone(int new_num1, int new_num2, int connect_to);
          void set_state(int connect_num); //set state char and connections int
          int compare(const bone & to_compare); //return 0 for a match, 1 for greater than the object, -1 for less than the object. 
          void make_connection(bone & to_connect);
          void start(bone & to_start);
          bool is_empty();
          void add_bone(bone & to_add);
          int tally();
   protected:
         int num1;
         int num2;
         char state; //D = Double, S = Start, R = Regular
         int connections;//number of available connections to the bone
         int connected; //for regulars, tells which number is connected, num1 or num2
};
