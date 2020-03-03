#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

//  二次元ベクトルクラス
class Vector2D{
protected:
    int m_x;
    int m_y;
public:
    //  コンストラクタ
    Vector2D();
    //  値の設定
    void setValue(int x,int y);
    //  Ｘ座標の取得
    int getX();
    //  Ｙ座標の取得
    int getY();
protected:
    //  初期化
    void init();
};

#endif // _VECTOR2D_H_