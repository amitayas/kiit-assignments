#include<stdio.h>

int main(){
    int n=0;
    printf("Enter a number with atleast 4 digits : ");
    
    while(1){
        printf("Enter a number with atleast 4 digits : ");
        scanf("%d", &n);

        if(n>999)
            break;
        printf("You need to enter a positive number with atleast four digits! \n");
    }

    int s = 0;
    int cp = n;

    while(cp>0){
        s = s + cp%10;
        cp = cp/10;
    }

    printf("Sum of digits : %d\n", s);
}
