#include <iostream>

#include "counter.h"

using namespace std;

int main(){
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    int a,b,c;
    a = c1.getCount();
    b = c2.getCount();
    c = Counter::getTotalCount();
    cout << a << ' ' << b << ' ' << c << endl;
    cout << "c1's count：";
    cout << a << '\n';
    cout << "c2's count：";
    cout << b << '\n';
    cout << "total count:" << Counter::getTotalCount() << endl;
    return 0;
}