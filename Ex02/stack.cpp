#include <iostream>
#include "stack.h"

bool Stack::empty(){
  if(size()==0){
    
  }

}
bool Stack::full(){
  if(size()!=99){
    return false;
  }
  else return true;
}

int Stack::size(){
  int size=0;
  while(1){
    if(_data[size]!=NULL]){
      size=size+1;
    }
    else break;
  }
  return size;
}

void Stack::push(int n){
  if(full()==true){

  }

}

void Stack::pop(){


}

int Stack::top(){


}
