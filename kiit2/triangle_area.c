#include<stdio.h>

int main(){
    printf("Enter magnitude of base : ");
    float base = 0.0;
    scanf("%f", &base);

    printf("Enter heigh : ");
    float height = 0.0;
    scanf("%f", &height);

    float area = 0.5 * base * height;

    printf("Area : %f\n", area);
}
