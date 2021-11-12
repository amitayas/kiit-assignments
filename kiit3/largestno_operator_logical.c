#include<stdio.h>

int main(){
    int a_711, b_711, c_711 = 0;
    //int a_711,b_711,c_711;
    printf("Enter first no : ");
    scanf("%d", &a_711);
    printf("Enter second no : ");
    scanf("%d", &b_711);
    printf("Enter third no : ");
    scanf("%d", &c_711);
    
    if(a_711>=b_711 && a_711>=c_711)
        printf("Largest no : %d\n",a_711);
    else if(b_711>=a_711 && b_711>=c_711)
        printf("Largest no : %d\n",b_711);
    else
        printf("Largest no : %d\n",c_711);
}
