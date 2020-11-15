#include "myMath.h"
#define EXP 2.71828

//e^x
double Exponent(int x){
    return Power(EXP,x);  
}
//x^y
double Power(double x , int y){
    if(x==0){return 0;}
    double sum = 1;
    int flag = 0;           //Indicates whether the power is positive or negative
    if(y<0){
        y = y*(-1);
        flag = 1;
    }
    for(int i = 0 ; i<y ; i++){  //A loop that multiplies X by itself Y times.
        sum = sum*x;
    }
    if(flag){return 1/sum;}
    else{return sum;}
}
