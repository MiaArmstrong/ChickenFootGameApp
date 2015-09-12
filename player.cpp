//Mia Armstrong
//Assignment 1
//FILE NAME: player.cpp
/* This is the file for the functions for the player class, the node class, the y_node class, and the f_node class. */

#include "player.h"


//default constructor for the hand class          
hand::hand(): size(72)
{
   bones = new bone[size];     
}

//destructor for the hand class          
hand::~hand()
{
   if(bones)
   {
      for (int i = 0; i < size; ++i)
         bones[i].remove();//just sets the data members to 0
   
      delete [] bones;//deletes the array
   }
}
          
//copy constructor for the hand class
hand::hand(const hand & source)
{
   size = source.size;
   bones = new bone[size];
  
}
          
//Displays a hand
//No input or return
void hand::display()
{
   cout << "Hand: " << endl;
   for (int i = 0; i < size; ++i)
   {
      if (!bones[i].is_empty())//if a bone is at the index, display the bone.
         bones[i].display();
   }
   
}
          
void hand::play() //puts a bone into the field from the hand       
{
   //not implemented in this assignment.
}          

//Adds a new bone to the hand from the yard.
//takes in a bone object
//returns nothing.
void hand::draw(bone & to_take) // takes a bone from yard and adds it to the player hand. 
{
   for(int i = 0; i < size; ++i)
   {
      if (bones[i].is_empty())
         bones[i].add_bone(to_take);
   }
}  
          
//player class constructor
player::player(): score(0)
{
   name = new char[size];
}
 
//player class destructor         
player::~player()
{
   if (name)
      delete [] name;
}
          
//player class copy constructor
player::player(const player & source)
{
   name = new char[strlen(source.name) +1];
   strcpy(name, source.name);
   score = source.score;
}
          
void player::start()
{
   cout << "Enter your name: ";
   cin.get(name, size, '\n'); cin.ignore(size, '\n');
   
   for (int i = 0; i < 8; ++i)
   {
      char letter;
      int number = 0;
      cout << "Pick a bone from the chicken yard.\nLetter coordinate: " << endl;
      cin >> letter;
      cout << "Number coordinate: " << endl;
      cin >> number;
      
   }
}
          
//Counts up the points in a hand and returns the score.
int player::tally_score()//return new score.
{
   int count = 0;
   for (int i = 0; i < size; ++i)
   {
      count += bones[i].tally();
   }
   return count;
}

void player::display()
{
   cout << "Player name: " << name << endl;
   cout << "Score: " << score << endl;
}          
//Allows a player to leave the game
void player::quit()
{
   if (name)
      delete [] name;
   score = 0;
  
}


         
y_node::y_node(): location('A'), next(NULL)
{
   y_bones = new bone[9];  
}
          
y_node::~y_node()
{
   delete [] y_bones;
}
          
y_node::y_node(const y_node & source)
{
   location = source.location;
   y_bones = new bone[9];
   next = source.next;
}
          
void y_node::create(char new_location)
{
   location = new_location;
   y_bones = new bone[9];
   int new_num1 = location - 64;
   for (int i = 0; i < 10; ++i)
   {
      y_bones[i].create_bone(new_num1, i+1, 0);
   }
   
}
          
void y_node::remove(char location)
{
   if (y_bones)
      delete [] y_bones;
   
}

