#include <stdio.h>

int factorial(int n){
    int fact=1;
    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }
    return fact;
}

float power(float x, int n){
    float p = 1.0;
    for (int i = 1; i < n+1; i++) {
        p = p * x;
    }
    return p;
}

int main(){
    int n;
    while (1) {
        printf("Enter no of terms to add : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("You need to enter a positive integer!\n");
    }
    float x;
    printf("Enter value of x : ");
    scanf("%f", &x);
    float s = 0.0;
    for (int i = 1; i < n+1; i++) {
        if (i%2==0) {
            s = s - power(x, (2*i-1))/factorial(2*i-1);
        }
        else {
            s = s + power(x, (2*i-1))/factorial(2*i-1);
        }
    }
    printf("Sum of the series : %f\n", s);
}
