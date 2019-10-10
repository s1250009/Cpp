#include <cstdlib> // for free
#include <iostream> // for std::cout, std::endl and <<
#include "int_str.h"
char* intToStr(int inum){
    int i = 0;
    int num[10];
    int temp;
    temp = inum;
    if(inum > 0){
        while(temp >= 1){
            i++;
            temp = temp/10;
        }
        char* c = (char*)malloc(i * sizeof(char));
        int j = i - 1;
        i = 0;
        while(inum >= 1){
            num[i] = inum % 10;
            c[j] = num[i] + '0';
            inum = inum / 10;
            i++;
            j--;
        }
        return c;
    }
    else if(inum == 0){
        char* c = (char*)malloc(1 * sizeof(char));
        c[0] = '0';
        return c;
    }
    else{
        while(temp <= -1){
            i++;
            temp = temp / 10;
        }
        char* c = (char*)malloc((i+1) * sizeof(char));
        int j = i;
        i = 0;
        while(inum <= -1){
            num[i] = (inum % 10) * -1;
            c[j] = num[i] + '0';
            inum = inum / 10;
            i++;
            j--;
        }
        c[0] = '-';
        return c;
    }
}

int strToInt(char* c){
    int pwr = 1;
    int sum = 0;
    int i = 0;
    while(c[i] != '\0'){
        i++;
    }
    int j;
    j = i - 1;
    if(c[0] == '-'){
        while(j > 0){
            sum = sum + ('0' - c[j]) * pwr;
            pwr = pwr*10;
            j--;
        }
    }
    else{
        while(j > -1){
            sum = sum + (c[j] - '0') * pwr;
            pwr = pwr*10;
            j--;
        }
    }
    return sum;
}
