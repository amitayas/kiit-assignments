#include<stdio.h>

int main(){
    int a,b;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("value of a : %d\n",a);
    printf("value of b : %d\n",b);

    int c;
    c = a + b;

    printf("Sum = %d\n", c);
}
