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

    int num = 0;
    printf("\n\nEnter no to search : ");
    scanf("%d", &num);
    int pos = -1;
    for ( i = 0; i < 10; i++) {
        if (*(arr+i)==num) {
            pos = i;
        }
    }

    if (pos==-1) {
        printf("Number not found!\n");
    }
    else {
        printf("Number found at position : %d(starting from 1)\n", (pos+1));
    }
}
