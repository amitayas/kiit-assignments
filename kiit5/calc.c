#include <stdio.h>

int main(){
    int a711,b711=0;
    printf("Enter first no : ");
    scanf("%d",&a711);
    printf("Enter second no : ");
    scanf("%d",&b711);

    //Create Menu
    printf("Menu :- \n 1.Add \n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Remainder\n"   );

    int choice711=0;
    
    while (1) {
        printf("Enter choice : ");
        scanf("%d",&choice711);
        
        if (choice711==1 || choice711==2 || choice711==3 || choice711==4 || choice711==5) {
            break;
        }

        printf("Invalid choice!\n");
    }

    int result711 = 0;

    switch (choice711) {
        default:
            result711 = a711%b711;
            break;
        case 1:
            result711 = a711 + b711;
            break;
        case 2:
            result711 = a711-b711;
            break;
        case 3:
            result711 = a711*b711;
            break;
        case 4:
            result711 = a711/b711;
            break;
    }


    printf("Result as per your choice : %d \n", result711);

}
