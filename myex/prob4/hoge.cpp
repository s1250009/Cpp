#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge(){
    cout << "Constructer" << endl;
}
Hoge::~Hoge(){
    cout << "Destructer" << endl;
}

void Hoge::foo(){
    cout << "foo method" << endl;
}