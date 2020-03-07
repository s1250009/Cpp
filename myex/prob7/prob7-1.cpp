#include <iostream>
#include "counter.h"

using namespace std;

int main(){
    //  カウンタを生成
    Counter* pC = new Counter();
    pC->count(); //  １回カウント
    pC->count(); //  １回カウント
    cout << "Count:" << pC->getCount() << " times." << endl;
    pC->count(4);    //  ４回カウント
    cout << "Count:" << pC->getCount() << " times." << endl;
    //  カウンタをリセット
    pC->reset();
    cout << "Count:" << pC->getCount() << " times." << endl;
    //  カウンタを消去
    delete pC;
    return 0;
}