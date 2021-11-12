#include<stdio.h>

int main(){
    int a_711,b_711,c_711;
    printf("Enter first no : ");
    scanf("%d", &a_711);
    printf("Enter second no : ");
    scanf("%d", &b_711);
    printf("Enter third no : ");
    scanf("%d", &c_711);

    int max = 0;

    if(a_711>b_711){
        if(a_711>c_711){
            printf("Max no : %d\n", a_711);
        }
        else{
            printf("Max no : %d\n", c_711);
        }
    }
    else{
        if(b_711>c_711){
            printf("Max no : %d\n", b_711);
        }
        else{
            printf("Max no : %d\n", c_711);
        }
    }
}
