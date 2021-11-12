#include<stdio.h>

int main(){
    int n_711;
    printf("Enter no to check : ");
    scanf("%d", &n_711);
    
    if(n_711%2==0)
        printf("Number entered is even!\n");
    else
        printf("Number entered is odd!\n");
}
