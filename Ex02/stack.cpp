#include <iostream>
#include "stack.h"


bool Stack::empty(){
  if(size()==0){
    return true;
  }
  return false;
}

bool Stack::full(){
  if(size()!=99){
    return false;
  }
  return true;
}

int Stack::size(){
  int size=0;
  while(1){
    if(_data[size] != '\0'){
      size=size+1;
    }
    else break;
  }
  return size;
}

void Stack::push(int n){
  if(full()==true){
    std::cout << "Stack is full" << '\n';
  }
  else _data[top()] = n;
}

void Stack::pop(){
  if(empty()==true){
    std::cout << "Stack is empty" << '\n';
  }
  else{
    _data[top()-1] = '\0';
  }
}

int Stack::top(){
  int i;
  for(i=0;;i++){
    if (_data[i]= '\0') {
      return i;
    }
  }
}
