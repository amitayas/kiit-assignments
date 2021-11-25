/*WAP to arrange the numbers stored in the array so that it will display first all odd
numbers, then even numbers.*/

#include <stdio.h>

int main(){
    int n = 0;
    while (1) {
        printf("Enter length of array : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("Enter a positive integer!\n");
    }

    int arr[n];

    int term = 0;
    int i = 0;
    for(i=0 ; i < n ; i++){
        printf("Enter a no to store : ");
        scanf("%d", &term);

        *(arr+i) = term;
    }

    int j =0;
    int tmp=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (*(arr+j)%2==0 && *(arr+j+1)%2!=0) {
                tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1)=tmp;
            }
        }
    }

    for ( i=0; i < n; i++) {
        printf("%d\t", *(arr+i));
    }

}
