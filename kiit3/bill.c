#include<stdio.h>

int main(){
    int  LMR, CMR;
    printf("Enter LMR : ");
    scanf("%d", &LMR);
    //float LMR, CMR;
    printf("Enter CMR : ");
    scanf("%d", &CMR);

    int units = CMR - LMR;
    float bill = 0.0;
    if(units>600)
        bill = 8.0*(units-600) + 200*5.5 + 200*3.5 + 200*1.5;
    else if(units>400)
        bill = 5.5*(units-400) + 200*3.5 + 200*1.5;
    else if(units>200)
        bill = 3.5*(units-200) + 200*1.5;
    else
        bill = 1.5 * units;

    printf("Bill : %f\n", bill);
}
