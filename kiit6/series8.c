/*
Calculate the sum of the following
S = 1 + x^2/2! + x^3/3! + .... (upto n terms)
*/

#include <stdio.h>

int fact(int n ){
    int p = 1;
    int i = 1;
    for(i=1;i<=n;i++){
        p = p * i;
    }
    return p;
}

int power(int x, int p){
    int pow = 1;
    int i = 1;
    for(i=1;i<=p;i++){
        pow = pow * x;
    }
    return pow;
}

int main(){
    int n;

    while (1) {
        printf("Enter no of terms : ");
        scanf("%d", &n);

        if (n>0) {
            break;
        }

        printf("You must enter a positive integer!\n");
    }

    int x;
    printf("Enter value of x : ");
    scanf("%d", &x);
    
    int i = 1;
    float s = 1.0;
    for(i=2;i<=n;i++){
        s = s + ((float)(power(x,i)))/fact(i);
    }

    printf("Result : %f\n", s);

}
