#include "ambulance.h"
#include <iostream>

using namespace std;


//  コンストラクタ
CAmbulance::CAmbulance() : m_number(119){
    cout << "CAmbulance object genarate" << endl;
}
//  デストラクタ
CAmbulance::~CAmbulance(){
    cout << "CAmbulance objects delete" << endl;
}
//  救急救命活動
void CAmbulance::sevePeople(){
    cout << "Emergency lifesaving activities" << endl << "Call number?" << m_number << endl;
}