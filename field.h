//Mia Armstrong
//Assignment 2
//Filename: field.h
/* This is the header file for the field class. The field class manages the graph which represents the field. */


#include "yard.h"


class vertex
{
   public:
          vertex();
          ~vertex();
          vertex(const vertex & to_add);
          int add(const bone & to_add);
          int remove();
          
   
          f_node * head;//head pointer of the adjacency list.
          bone * a_bone; //pointer to a bone object
};

class field
{
    public:
           field(int size=81);
           ~field();
           field(const field & to_add);
           int insert_vertex(const bone & to_add);
           int find_location(int key_num);
           int insert_edge(int current, int to_attach);
           int display_adjacent(int key_num);
           int display_all()const;
           void remove_all();
           
   protected:
           vertex * adjacency_list;
           int list_size;
};

