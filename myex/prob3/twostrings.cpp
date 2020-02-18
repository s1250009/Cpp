#include "twostrings.h"

void TwoStrings::setString1(string s){
    m_string1 = s;
}
void TwoStrings::setString2(string s){
    m_string2 = s;
}
string TwoStrings::getString1(){
    return m_string1;
}
string TwoStrings::getString2(){
    return m_string2;
}
string TwoStrings::getConnectedString(){
    string a;
    a.append(m_string1);
    a.append(m_string2);
    return a;
}
int TwoStrings::getConnectedLength(){
    string a;
    a.append(m_string1);
    a.append(m_string2);
    int num;
    num =a.length(); 
    return num;
}