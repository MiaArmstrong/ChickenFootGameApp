//Mia Armstrong CS202
//Assignment 1 
// FILENAME: bone.cpp
/*This file contains the functions for the bone class, the node class, the y_node class, and the f_node class.*/
 
#include "bone.h"

//Default constructor for the bone class. Sets all the data members.          
bone::bone(): num1(0), num2(0), state('N'), connections(0), connected(0)
{
}

bone::~bone()
{
}          

//sets all the data members to zero.
//Does not take in or return anything.           
void bone::remove()
{
   num1 = 0;
   num2 = 0;
   connections = 0;
   connected = 0;
}
          
//Displays a bone. 
void bone::display()
{
   if(num1 == 0)
   {
      cout << " X ";
   }
   else
   {
      cout << " [ " << num1 << " | " << num2 << " ] ";
   }
   cout << "state: " << state << endl;
   cout << "Connections: " << connections << endl;
   cout << "Connected: " << connected << endl;
}

//creates a new bone object
//Takes in two numbers to create a new bone then calls the set_state function and sets the bone up by type.
//Returns nothing.         
void bone::create_bone(int new_num1, int new_num2, int connect_to)
{
   num1 = new_num1;
   num2 = new_num2;
   set_state(connect_to);
}
          
//Sets the state of the bone object by determining it's state and it's connections to other bones.
//Takes in an int and returns nothing.
void bone::set_state(int connect_num) //set state char and connections int
{
   if(state == 'S')
   {
      connections = 4;
      connected = 0;
      return;
   }
   if(num1 == num2)
   {
      state = 'D';
      connections = 3;
      connected = 0;
   }
   else
   {
      state = 'R';
      connections = 1;
      connected = connect_num;
   }
}          

//compares the bone to a bone in the yard. 
//takes in a bone object
//returns an int
int bone::compare(const bone & to_compare)  //return 0 for a match, 1 for greater than the object, -1 for less than the object. Return -2 for no match and no double.
{
   if (to_compare.connected != to_compare.num2)//if num1 is connected to another bone
   {
      if (num2 == to_compare.num2 || num1 == to_compare.num2) //compare num2 
         return 0;
      else if (state == 'D' && num1 > to_compare.num2)//if num1 is a double and is greater than the object
         return 1;
      else if (state == 'D' && num1 < to_compare.num2) //if num1 is a double and is less than the object.
         return -1;
   }
   else
   {
      if (num2 == to_compare.num1 || num1 == to_compare.num1)
         return 0;
      else if (state == 'D' && num1 > to_compare.num1)
         return 1;
      else if (state == 'D' && num1 < to_compare.num1)
         return -1;
      else 
         return -2;
   }
   
}          

//sets up the connection flags in the bone object
//takes in two bone objects that are going to be connected in the field.
//returns nothing.
void bone::make_connection(bone & to_connect)
{
   --to_connect.connections;
   --connections;
 
   if (to_connect.state == 'D')
   {
      if (to_connect.num1 == num1)
         connected = num1;
      else 
         connected = num2;
   }
   else if (state == 'D')
   {
      if (num1 == to_connect.num1)
         to_connect.connected = to_connect.num1;
      else
         to_connect.connected = to_connect.num2;
   }
   else if (to_connect.num1 == num1)
   {
      to_connect.connected = to_connect.num1;
      connected = num1;
   }
   else if (to_connect.num2 == num2)
   {
      to_connect.connected = to_connect.num2;
      connected = num2;
   }
   else if (to_connect.num1 == num2)
   {
      to_connect.connected = to_connect.num1;
      connected = num2;
   }
   else if (to_connect.num2 == num1)
   {
      to_connect.connected = to_connect.num2;
      connected = num1;
   }
   else
      return;
   
}
         
//sets the state and connections of the starting bone object
//takes in a bone object
//returns nothing.
void bone::start(bone & to_start)
{
   to_start.state = 'S';
   connections = 4;
   connected = 0;
}

//Tells whether the space in a hand is empty or not
//returns a bool: true if it is empty and false it if is not empty
bool bone::is_empty()
{
   if(num1 == 0)
      return true;
   else
      return false;
}
          
//copies the bone object to add into the data members
//takes in a bone object.
//returns nothing.
void bone::add_bone(bone & to_add)
{
   num1 = to_add.num1;
   num2 = to_add.num2;
   state = to_add.state;
   connections = to_add.connections;
   connected = to_add.connections;
}

//Adds the numbers on the bone together and returns the sum.
int bone::tally()
{
   return num1 + num2;
}

