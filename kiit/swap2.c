#include<stdio.h>

int main(){
    int a,b;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Original value of a : %d\n",a);
    printf("Original value of b : %d\n",b);

    //swap logic
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapped value in a : %d\n", a);
    printf("Swapped value in b : %d\n", b);
}
