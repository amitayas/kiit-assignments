#include <stdio.h>

int is_prime(int n){
    int flag=0;
    for (int i = 1; i <= n; i++) {
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
    int u,v;
    //u=5;v=20;
    while (1) {
        printf("Enter lower range : ");
        scanf("%d", &u);
        printf("Enter upper range : ");
        scanf("%d", &v);
        if (u>0 && v>u) {
            break;
        }
        printf("Enter a proper range in positive integers!\n");
    }
    

    for (int i = u; i <= v; i++) {
        if (is_prime(i)) {
            printf("%d\t", i);
        }
    }
    return 0;
}
