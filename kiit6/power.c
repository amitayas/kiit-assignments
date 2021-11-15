#include <stdio.h>

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
        printf("Enter value of n : ");
        scanf("%d", &n);

        if (n>0) {
            break;
        }

        printf("Enter a positive integer!\n");
    }

    int x;
    printf("Enter value of x : ");
    scanf("%d", &x);
    int pow = power(x, n);
    printf("Result : %d\n", pow);
}
