//swap.cpp
#include <iostream>

void swap(int* i,int* j) {
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;  
}
