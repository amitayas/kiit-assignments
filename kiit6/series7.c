#include <stdio.h>

int fact(int n ){
    int p = 1;
    int i = 1;
    for(i=1;i<=n;i++){
        p = p * i;
    }
    return p;
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

    int i = 1;
    float s = 1.0;
    for(i=2 ; i<=n ;i++){
        if (i%2==0) {
            s = s + 1.0/fact(i);
        }
        else {
            s = s - 1.0/fact(i);
        }
    }

    printf("Result : %f", s);
}
