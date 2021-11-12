#include<stdio.h>

int main(){
    printf("Enter temperature in Fahrenheit : ");
    float fah = 0.0;
    scanf("%f", &fah);

    float cen = (fah - 32.0)/9.0 * 5;

    printf("Temperature in Cecius : %f\n", cen);
}
