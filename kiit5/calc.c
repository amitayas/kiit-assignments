#include <stdio.h>

int main(){
    int a,b=0;
    printf("Enter first no : ");
    scanf("%d",&a);
    printf("Enter second no : ");
    scanf("%d",&b);

    //Create Menu
    printf("Menu :- \n 1.Add \n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Remainder\n"   );

    int choice=0;
    
    while (1) {
        printf("Enter choice : ");
        scanf("%d",&choice);
        
        if (choice==1 || choice==2 || choice==3 || choice==4 || choice==5) {
            break;
        }

        printf("Invalid choice!\n");
    }

    int result = 0;

    switch (choice) {
        default:
            result = a%b;
            break;
        case 1:
            result = a + b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
    }


    printf("Result as per your choice : %d \n", result);

}
