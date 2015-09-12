//Mia Armstrong CS202
//Assignment 1 
/*This is the header file for the hand class and the player class for the chicken bone game program. The player "is a" hand plus a name and a score. The hand is an array of bone objects.*/

#include "bone.h"


         
class hand   //an array of bones
{
   public: 
          hand();
          ~hand();
          hand(const hand & source);
          void display();
          void play(); //puts a bone into the field from the hand       
          void draw(bone & to_take); // takes a bone from yard and adds it to the player hand.
           
   protected:
          bone * bones;
          int size;
         

};

class player: public hand
{
   public: 
          player();
          ~player();
          player(const player & source);
          void start();
          int tally_score();//return new score.
          void display();
          void quit();
        
   protected:
          char * name;
          int score;
};


class y_node //node used for the yard class
{
   public:
          y_node();
          ~y_node();
          y_node(const y_node & source);
          void create(char location);
          void remove(char location);
          y_node * next;
   protected:
          char location; //used for coordinates for the location in the yard
          bone * y_bones; // an array of bones
          
};

class f_node  //node used for the field class
{
   public:
          f_node();
          ~f_node();
          f_node(const f_node & source);
          void create();
          void remove();
          f_node * next; 
   
          f_node * adjacent;//a pointer to the adjacency list for the bone.
          
};

