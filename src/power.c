#include "myMath.h"
#define EXP 2.71828

double Exponent(int x){
    return Power(EXP,x);
}

double Power(double x , int y){
    if(x==0){return 0;}
    double sum = 1;
    for(int i = 0 ; i<y ; i++){
        sum = sum*x;
    }
    return sum;
}
