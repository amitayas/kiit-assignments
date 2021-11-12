#include <stdio.h>

int main(){
    int n = 1;

body:
    printf("%d \n", n);

if (n<100) {
    n++;
    goto body;
}
}
