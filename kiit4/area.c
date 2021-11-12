#include <stdio.h>

int main(){
    float a,b=1.0;

    printf("Menu :-\n1.Circle\n2.Triangle\n3.Rectangle\n");

    int choice = 0;
    float result = 0.0;

    while (1) {
        printf("Enter choice : ");
        scanf("%d", &choice);

        if (choice==1 || choice==2 || choice==3) {
            break;
        }

        printf("Invalid choice!\n");
    }

    if (choice==2) {
        printf("Enter base of triangle: ");
        scanf("%f", &a);
        printf("Enter height of triangle : ");
        scanf("%f", &b);

        result = (a/2)*b;
    }
    else if(choice==3){
        printf("Enter length : ");
        scanf("%f", &a);
        printf("Enter width : ");
        scanf("%f", &b);

        result = a * b;
    }
    else {
        printf("Enter radius : ");
        scanf("%f", &a);
        result = 3.14 * a * a;    
    }

    printf("Result according to choice : %f\n", result);
}
