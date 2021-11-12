#include<stdio.h>

int main(){
    int n=0;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    

    int s = 0;
    int cp = n;

    while(cp>0){
        s = s + cp%10;
        cp = cp/10;
    }

    printf("Sum of digits : %d\n", s);
}
