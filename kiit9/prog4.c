#include <stdio.h>

float sum(float a, float b){
    return a+b;
}

int main(){
    float a, b;
    printf("Enter two nos to add: (num1:num2) ");
    scanf("%f:%f", &a, &b);
    printf("Sum of %f and %f : %f", a, b, sum(a,b));
}
