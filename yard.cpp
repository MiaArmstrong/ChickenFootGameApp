//Mia Armstrong
//Assignment 1
//FILE NAME: yard.cpp
/* This file contains the functions for the yard class */

#include "yard.h"

          
yard::yard(): head(NULL), top_index(0)
{
}
         
yard::~yard()
{
   y_node * temp = head;
   while (head)
   {
      temp = head->next;
      delete head;
      head = temp; 
   }
   head = NULL;
}
          
void yard::create() //creates a new yard of bones
{
   char new_location = 'A';
   y_node * temp = head;
   for (int i = 0; i < 10; ++i)
   {
      temp->create(new_location + i);
   }
}
          
void yard::display_all()const
{
}
          
void yard::shuffle() //shuffles the yard
{
}
          
void yard::remove(bone & to_hand) //calls the hand function to remove a bone from the yard to the player's hand.
{
   char row;
   int col = 0;
   display_all();
   cout << "Choose a bone by entering the coordinates.\nRow: ";
   cin >> row;
   cout << "\nColumn: ";
   cin >> col;
   --col;

   y_node * temp = head;
   //while (temp->location != row)
     // temp = temp->next;
   

   
   
   
}

void yard::start_hand(hand & to_add)
{
   for (int i = 0; i < 8; ++i)
   {
     // hand::remove(to_add[i]);
   }
}
