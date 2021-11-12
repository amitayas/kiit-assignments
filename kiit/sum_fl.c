#include<stdio.h>

int main(){
    float a,b;
    printf("Enter value of a : ");
    scanf("%f", &a);
    printf("Enter value of b : ");
    scanf("%f", &b);
    printf("value of a : %f\n",a);
    printf("value of b : %f\n",b);

    float c;
    c = a + b;

    printf("Sum = %f\n", c);
}
