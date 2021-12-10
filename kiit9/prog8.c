#include <stdio.h>

int is_prime(int n){
    int flag=0;
    for (int i = 1; i < n+1; i++) {
        if (n%i==0) {
            flag++;
        }
    }
    if (flag==2) {
        return 1;
    }
    return 0;
}

int main(){
    printf("Prime nos between 1 & 100 :-\n\n");
    for (int i = 1; i < 101; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}
