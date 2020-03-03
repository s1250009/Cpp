#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "airplane.h"

//  Fighterクラス
class Fighter : public Airplane{
public:
    //  Fighting
    void fight();
};

#endif // _FIGHTER_H_