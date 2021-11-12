#include<stdio.h>

int main(){
    printf("Enter distance in meters : ");
    int m;
    scanf("%d", &m);

    int k = m/1000;
    int mf = m%1000;

    printf("%d meter = %d km and %d meters\n", m, k, mf);
}
