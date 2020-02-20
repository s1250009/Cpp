#include <iostream>
#include "function.h"

using namespace std;

int main(){
    int m = 3, n = 1;
    cout << m << " and, " << n << ". Max is " << Function::max(m, n) << endl;
    cout << m << " and, " << n << ". Min is " << Function::min(m, n) << endl;
    return 0;
}