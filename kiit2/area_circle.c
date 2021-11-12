#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter radius of circle : ");
    float r;
    scanf("%f", &r);

    float area = exp(log(3.14) + log(r) + log(r));

    printf("Area : %f\n", area);
    printf("%f",fabs(area));

    printf("\n%f %f", 1111.1111,1111.1111F);
}
