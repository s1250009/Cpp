// test_pointers.cpp
// COMPLETE include necessary headers

#include <iostream>
#include <cstdlib>
int main(void)
{
  //
  // 1. declare a variable d as a pointer to a double
  // 2. create a double variable named pi, and store the value 3.14159
  // 3. make d points to pi
  // 4. print out the content of the memory location pointed to by d

  double pi;
  pi = 3.14;

  double* d = nullptr;
  d = &pi;

  std::cout << &d << std::endl;
  //
  int a[5] = {1, 2, 3, 4, 5};
  // 5. declare a variable ip as a pointer to an int
  int* ip = nullptr;
  // 6. make ip points to the beginning of the array a
  ip = &a[0];
  // 7. print out what ip points to and the content of a[0] (verify they are the same)
  std::cout << ip << std::endl;
  // 8. increase ip by 3 and check that what it points to corresponds to a[3]
  ip = ip + 3;
  std::cout << ip << std::endl;
  // 9. make ip points to the last element of the array by increasing it by 1
  ip = ip + 1;
  std::cout << ip << std::endl;
  //     and check that what it points to corresponds to a[4]



  //
  int n = 10;
  // 10. declare a variable "f" as a pointer to float and
  // make it point to an array of "n" element of type "float" created on the heap
  float* f = nullptr;
  int i;
  // 11. store in each f[i] (for i=0 to n-1) the value float(i) / 5.0f;
  f = malloc(sizeof(float)*n);
  for(i=0;i<n;i++){
    f[i]=i/5.0;
  }
  // 12. print out each element of f
  for(i=0;i<n;i++){
    std::cout << f[i];
    std::cout << ' ' << std::endl;
  }
  std::endl;
  // 13. delete the previously allocated memory
  delete(f);

  //
  int m = 5;
  double** dd;
  // 14. allocate memory for a 2d array of size m * n on the heap (i.e. m arrays of size n).  // Make dd points to this 2d array.
  dd = malloc(sizeof(double *) * n);
  for (i=0;i<n;i++) {
	   dd[i] = malloc(sizeof(double) * m);
   }
  // 15. set the element dd[i][j] to be equal to i*j/2
  int j=0;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    dd[i][j] = (i*j)/2;
    std::cout << dd[i][j] << std::end;
    std::cout << ' ' << std::end;
    }
    //std::endl;
  }
  /*for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    }
  }*/
  // 16. delete the memory allocated for the 2d array
  for(i=0;i<n;i++){
    free(dd[i]);
  }
  free(dd);
  return 0;
}
