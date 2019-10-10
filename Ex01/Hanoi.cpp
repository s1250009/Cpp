// Hanoi.cpp
#include <iostream>
#include <string>
void hanoi(int, std::string, std::string, std::string);
// COMPLETE:
// Define the function Hanoi.
// Its argument is the number of disks.
//
// The function should print a series of instructions for
// how to move the disks in order to solve the problem.
int main(int argc, char** argv) {
  if (argc!=2) {
    std::cout << "Usage: " << argv[0] << " n" << std::endl;
    std::cout << "where n is the number of disks." << std::endl;
    return 1;
  }
  int n = std::stoi(argv[1]); // convert the argv[1] to an int
  std::string a = "A";
  std::string b = "B";
  std::string c = "C";
  // COMPLETE:
  // Call Hanoi with n disks
    hanoi(n, a, b, c);
}
void hanoi(int n, std::string a, std::string b, std::string c){
    if(n>0){
        hanoi(n-1,a,b,c);
        printf("move the %d th disk from %s to %s\n",n,a.c_str(),c.c_str());
        hanoi(n-1,b,c,a);
    }
}
