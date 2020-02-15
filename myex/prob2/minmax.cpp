#include "minmax.h"

//  最大値を返す
int MinMax::max(int n1,int n2,int n3){
    int max;
    if (n1 > n2){
        max = n1;
    }
    else{
        max = n2;
    }
    if(max > n3){
        return max;
    }
    return n3;
}
//  最小値を返す
int MinMax::min(int n1,int n2,int n3){
    return -max(-n1, -n2, -n3);
}