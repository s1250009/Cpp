// test_swap.cpp

// <- Include all the necessary headers here
#include <iostream>
#include <cassert>
#include "swap.h"


int main(void) {
  int i = 1;
  int j = 2;
  /* call swap() in order to swap the contents of i and j;
     pass the arguments to swap by reference. */
  swap(&i,&j);

  assert(i == 2);
  assert(j == 1);
  return 0;
}
