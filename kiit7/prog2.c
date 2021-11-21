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

    printf("\nPopulated array(in reverse!) :-\n\n");
    
    for ( i = 9; i >= 0; i--) {
        printf("%d \t", *(arr+i));
    }
}
