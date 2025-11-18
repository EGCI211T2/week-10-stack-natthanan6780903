
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};

void Stack::push(int x){
    //push = add a new node to the top of stack
    //new node created and added to the top

  NodePtr new_node=new NODE(x); //create new node

  if(new_node){
     new_node->set_next(top); //link new node to current top
     top = new_node; //update top to point to the new node
     size++;
   }
   else{
       cout<<"Stack push error: memory allocation failed"<<endl;
   }
   
}

int Stack::pop(){
    //pop = remove the top node from stack and return/show/pop its value
        NodePtr t=top;//temp pointer to hold the top node

        if(t!=NULL){
            int value; //to hold the value to return
            value=t->get_value(); //get the value from the top node
            top = t-> get_next();//update top to point to the next node
            --size; // decrease size first then show new size
            delete t; //delete the old top node

            //cout<<"Popped "<<value<<endl;
            return value; //return the value
        }
    cout<<"empty stack"<<endl;
    return 0;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    //constructor
    top = NULL; //initially empty stack
    size=0; 
    
}
Stack::~Stack(){
     //delete all remaning stack (i.e. pop all) 
     cout<<"clearing stack..."<<endl;
     int n = size;
    while(n>0){
        pop();
        n--;
    }   
}
#endif
