#include "calculation.h"

void Calculation::setNumber1(int n){
    m_number1 = n;
    // cout << m_number1 << endl;
}
void Calculation::setNumber2(int n){
    m_number2 = n;
    // cout << m_number1 << endl;
}
int Calculation::getNumber1(){
    return m_number1;
}
int Calculation::getNumber2(){
    return m_number2;
}
int Calculation::add(){
    // cout << (m_number1 + m_number2) << endl; 
    return (m_number1 + m_number2);
}
int Calculation::sub(){
    return (m_number1 - m_number2);
}