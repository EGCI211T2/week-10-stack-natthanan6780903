//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef node_h
#define node_h
class NODE{
private:
    int data;
    NODE *nextPtr;
public:
    NODE(int); 
    ~NODE();
    void set_next(NODE*); //set the next pointer
    NODE* get_next(); //get the next pointer
    int get_value();
};
typedef NODE* NodePtr;


NODE::NODE(int x){
    data=x;
    nextPtr=NULL;
    //pPtr =NULL; not using doubly
}
NODE* NODE::get_next(){
    //return pointer to next node
    return nextPtr;
}

int NODE::get_value(){
    //return the data value
    return data;
}

void NODE::set_next(NODE *t){
    //set the next pointer to t
     nextPtr=t;

}
NODE::~NODE(){
     cout<<"deleting "<<data<<endl;

}






#endif
