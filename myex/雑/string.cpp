#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    string s,t;
    t ="Input words are ";
    cout << "Can you input words?\n";
    cin >> s;
    cout << t+s << "." << endl;
    return 0;
}