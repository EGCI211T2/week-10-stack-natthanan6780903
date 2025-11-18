#include<iostream>
using namespace std;
#include <cstring>
#include "stack.h"

int main(int argc, char **argv){
    Stack s;
    /*s.push(5); //5
      s.push(1); //1 5
      s.push(7); //7 1 5
      s.pop(); //1 5
      s.push(6); //6 1 5
      s.pop(); //1 5
    */
      
    //Exercise 1
    int i;
    for(i=1;i<argc;i++){
      if(strcmp(argv[i], "x")==0) s.pop();
      else s.push(atoi(argv[i]));
    }
   return 0;
}
