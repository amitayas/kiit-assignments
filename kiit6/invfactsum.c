#include <stdio.h>

int main(){
    int n = 1;
    int i =1;
    int j =1;
    float s = 0;
    int fact = 1;

    for ( i = 1; i <= n ; i++) {
        fact = 1;
        for(j=1 ; j<=i ;j++){
            fact =  fact * j;
        }
        s = s + 1.0/fact;
    }

    printf("Result : %f", s);
}
