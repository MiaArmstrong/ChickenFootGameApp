//Mia Armstrong
//Assignment 2
//Filename: field.cpp
/* This is the implementation file for the functions in the field class. The field class manages an array of pointers to adjacency lists and their corresponding bones. */


#include "field.h"


           
field::field(int size)
{
   list_size = size;
 
   adjacency_list = new vertex[list_size];

   for (int i = 0; i < list_size; ++i)
   {
      adjacency_list[i].a_bone = NULL;
      adjacency_list[i].head = NULL;
   }
}
           
field::~field()
{
   remove_all();
   delete adjacency_list;
   adjacency_list = NULL;
}
           
field::field(const field & to_add)
{
}
           
int field::insert_vertex(const bone & to_add)
{
}
           
int field::find_location(int key_num)
{
}
           
int field::insert_edge(int current, int to_attach)
{
}
           
int field::display_adjacent(int key_num)
{
}
           
int field::display_all()const
{
}

void field::remove_all()
{
  /* for (int i = 0; i < list_size; ++i)
   {
      f_node * temp = adjacency_list[i].head;
      while (temp)
      {
         temp = adjacency_list[i].head->next;
         delete adjacency_list[i].head;
         adjacency_list[i].head = temp;
      }
      adjacency_list[i].head = NULL;
      delete adjacency_list[i].a_bone;
      adjacency_list[i].a_bone = NULL;
   }
   return;*/
}

          
vertex::vertex()
{
}
          
vertex::~vertex()
{
}
          
vertex::vertex(const vertex & to_add)
{
}
          
int vertex::add(const bone & to_add)
{
}
          
int vertex::remove()
{
}

