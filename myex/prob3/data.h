#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
private:
    //  メンバ変数number
    int number;
    //  メンバ変数comment
    string comment;
public:
    //  初期化
    void init();
    // 数字のセット
    void setNumber(int);
    //コメントのセット
    void setComment(string);
    //数字を返す
    int getNumber();
    //コメントを返す
    string getComment();
};

#endif // _CDATA_H_