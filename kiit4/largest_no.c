#include<stdio.h>

int main(){
    int a_711,b_711,c_711;
    printf("Enter first no : ");
    scanf("%d", &a_711);
    printf("Enter second no : ");
    scanf("%d", &b_711);
    printf("Enter third no : ");
    scanf("%d", &c_711);

    int max = a_711 > b_711 ? (a_711 > c_711 ? a_711 : c_711) : (b_711 > c_711 ? b_711 : c_711);
    
    printf("Max no : %d", max);
}
