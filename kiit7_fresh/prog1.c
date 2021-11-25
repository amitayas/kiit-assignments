/*WAP to store 10 numbers into an array. Find the sum/product of the even numbers and product of the odd numbers and print it.*/

#include <stdio.h>

int main(){
    int arr[10];
    int n = 0;

    int i = 0;
    for(i=0 ; i < 10 ; i++){
        printf("Enter a no to store : ");
        scanf("%d", &n);

        *(arr+i) = n;
    }

    printf("\nPopulated array :-\n\n");
    
    for ( i = 0; i < 10; i++) {
        printf("%d \t", *(arr+i));
    }

    printf("\n\n");

    int sum_even = 0;
    int prod_even = 1;
    int prod_odd = 1;

    for ( i = 0; i < 10; i++) {
        if (*(arr+i)%2==0) {
            sum_even += *(arr+i);
            prod_even *= *(arr+i);
        }
        else {
            prod_odd *= *(arr+i);
        }
    }

    printf("Sum of even elements : %d\nProduct of even elements : %d\nProduct of odd elements : %d\n", sum_even, prod_even, prod_odd);
}
