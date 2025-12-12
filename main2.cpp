#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;


#include "stack.h"


int main(int argc, char **argv){

  cout<<"Checking the parentheses in argv arguments"<<endl;

  for(int i=1; i<argc; i++){ 
    Stack s; // Stack for each argument
    bool matched = true;
    
    for(int j=0; j<strlen(argv[i]); j++){
      // Use stack to help with the parentheses
      if(argv[i][j]=='[' || argv[i][j]=='{' || argv[i][j]=='('){
        s.push(argv[i][j]);
      }
      else if(argv[i][j]==']' || argv[i][j]==')' || argv[i][j]=='}'){
        char x = s.pop();
        if((argv[i][j]==']' && x=='[') ||
           (argv[i][j]==')' && x=='(') ||
           (argv[i][j]=='}' && x=='{')){
          // Match found - keep it popped
          cout<<"deleting "<<(int)x<<endl;
          cout<<"Deleting part "<<(char)x<<endl;
        }
        else{
          // No match - push back and report error
          s.push(x);
          cout<<"Mismatched parentheses in argument "<<argv[i]<<endl;
          matched = false;
          break;
        }
      }
    }
    
    if(matched && !s.is_empty()){
      cout<<"Unmatched opening parentheses in argument "<<argv[i]<<endl;
    }
    else if(matched){
      cout<<"Parentheses matched in argument "<<argv[i]<<endl;
    }
  }

  return 0;
}



