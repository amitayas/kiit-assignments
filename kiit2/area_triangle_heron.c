#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    printf("Enter length of side 1 : ");
    scanf("%f", &a);
    printf("Enter length of side 2 : ");
    scanf("%f", &b);
    printf("Enter length of side 3 : ");
    scanf("%f", &c);

    float s = (a+b+c)/2.0;
    float area = sqrt(s*(s - a)*(s - b)*(s - c));
    
    printf("Area : %f\n", area);
}
