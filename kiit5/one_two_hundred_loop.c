#include <stdio.h>

int main(){
    int n = 1;

    while (1) {
        if (n>100) {
            break;
        }
        printf("%d\n",n);
        n++;
    }
}
