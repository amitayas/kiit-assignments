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

    int max = *arr;
    for ( i = 0; i < n; i++) {
        if (*(arr+i)%2==0 && *(arr+i)>=max){
            max = *(arr+i);
        }
    }

       
    if (max%2==0) {
        printf("Max Even no : %d\n", max); 
    }
    else {
        printf("No even nos in array!\n");
    }
}
