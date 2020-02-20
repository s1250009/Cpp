#include "rat.h"
#include <iostream>

using namespace std;

//  ネズミの数の初期値を0に設定
int CRat::m_count = 0;

//  コンストラクタ
CRat::CRat() : m_id(0){
    m_id = m_count;    //  ネズミの数を、IDとする。
    m_count++;        //  ネズミの数を一つ増やす
}
//  デストラクタ
CRat::~CRat() {
    cout << "Rat:" << m_id << " deleted" << endl;
    m_count--;        //  ネズミの数を一つ減らす
}
//  ネズミの数の出力
void CRat::showNum(){
    cout << "Now, Rats are " << m_count << endl;
}
//  ネズミが鳴く
void CRat::squeak(){
    cout << m_id << ":" << "Chu, Chu" << endl;
}