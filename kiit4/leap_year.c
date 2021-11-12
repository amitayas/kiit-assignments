#include <stdio.h>

int test(int year){
    if(year%100 == 0){
        if(year%400==0)
            return 1;
        else
            return 0;
    }
    else{
        if(year%4 == 0)
            return 1;
        else
            return 0;
    }
}
int main(){
    int year = 0;

    while (1) {
        printf("Enter year to check : ");
        scanf("%d", &year);

        if (year>0) {
            break;
        }

        printf("The year you entered must be a positive integer!\n");
    }

    if (test(year)) {
        printf("%d is a leap year!\n", year);
    }
    else {
        printf("%d is not a leap year!\n", year);
    }
}
