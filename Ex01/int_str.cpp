//int.str.cpp

#include <iostream>
#include "int_str.h"

char* intToStr(int i){
  int count=0;
  int j = 0;
  int temp=0;
  char* p;
  int check=0;
  check = i;
  while (1) {
    if(check != 0){
      count++;
      check = check / 10;
    }
    else{
        break;
    }
  }
  int num[count];
  while(1){
    if(i/10 != 0){
      temp  = (i%10);
      num[j] = temp;
      i = i / 10;
      j++;
    }
    else{
      break;
    }
  }
  p = (char*) malloc( sizeof(char) * (j));
  int k=0;
  count = 0;
  for(k=j-1;k>=0;k--){
    p[count] = ((char)num[k]+'0');
    count++;
  }
  return p;
}

int strToInt(char* c){
  int j = 0;
  int sum = 0;
  int pwr = 1;
  while(1){
    if(c[j] != '\n'){
      std::cout << c[j] << ' ';
      j++;
    }
    else{
      std::cout << std::endl;
      std::cout << std::endl;
      break;
    }
  }
  while(1){
    //j--;
    if(j>=0){
      std::cout << j <<' ';
      sum = sum + (c[j]-48)*pwr;
      pwr = pwr*10;
      j--;
    }
    else{
      break;
    }
  }
  return sum;
}
