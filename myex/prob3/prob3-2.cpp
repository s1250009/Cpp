#include <iostream>
#include "twostrings.h"

using namespace std;

int main(){
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "First strings are " << s.getString1() << endl;
    cout << "Second strings are " << s.getString2() << endl;
    cout << "Fixed strings are " << s.getConnectedString() << endl;
    cout << "Length of strings are " << s.getConnectedLength() << " words." << endl;
    return 0;
}