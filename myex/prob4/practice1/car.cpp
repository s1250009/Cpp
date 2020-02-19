#include "car.h"
#include <iostream>

using namespace std;

//  コンストラクタ
CCar::CCar() : m_fuel(0),m_migration(0){
    cout << "CCar object genarate." << endl;
}
//  デストラクタ
CCar::~CCar(){
    cout << "CCar object remove." << endl;
}
void CCar::move(){
    //  燃料があるなら移動
    if(m_fuel >= 0){
        m_migration++;  //  距離移動
        m_fuel--;       //  燃料消費
    }
    cout << "Moving distance:" << m_migration << endl;
    cout << "The fuel" << m_fuel << endl;
}
//  燃料補給メソッド
void CCar::supply(int fuel){
    if(fuel > 0){
        m_fuel += fuel; //  燃料補給
    }
    cout << "The fuel" << m_fuel << endl;
}