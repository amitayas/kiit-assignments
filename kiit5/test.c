#include <stdio.h>
#include <string.h>
int main(){
    int a711,b711=0;
    printf("Enter first no : ");
    scanf("%d",&a711);
    printf("Enter second no : ");
    scanf("%d",&b711);

    //Create Menu
    printf("Menu :- \n 1.Add \n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Remainder\n");

    int choice711=0;

    while (1) {
        
        printf("Enter choice : ");
        choice711 = getchar();
        choice711 = getchar();

        if (choice711=='+' || choice711=='-' || choice711=='*' || choice711=='/' || choice711=='%') {
            break;
        }

        printf("Invalid choice!\n");


    }

    int result711 = 0;

    switch (choice711) {
        default:
            result711 = a711%b711;
            break;
        case '+':
            result711 = a711 + b711;
            break;
        case '-':
            result711 = a711-b711;
            break;
        case '*':
            result711 = a711*b711;
            break;
        case '/':
            result711 = a711/b711;
            break;
    }


    printf("Result as per your choice : %d \n", result711);

}
