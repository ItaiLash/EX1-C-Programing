#include <stdio.h>
#include "myMath.h"
#include "basicMath.c"
#include "power.c"


int main(){
    double x;
    printf("Please insert a real number: ");
    scanf("%lf", &x);
    float func1 = sub(add(Exponent((int)x) ,Power(x,3)), 2);
    float func2 = add(mul(x,3), mul(Power(x,2),2));
    float func3 = sub(div(mul(Power(x,3),4),5),mul(x,2));
    printf("The value of f(𝑥) = e^x + x^3 − 2 at the point %lf is: %0.4lf\n",x,func1);
    printf("The value of f(𝑥) = 3x + 2x^2  at the point %lf is: %0.4lf\n",x,func2);
    printf("The value of f(𝑥) = 4x^3 / 5 - 2x  at the point %lf is: %0.4lf",x,func3);

return 0;
}
