#include <stdio.h>

int main(){
    int a,b=0;
    printf("Enter first no : ");
    scanf("%d",&a);
    printf("Enter second no : ");
    scanf("%d",&b);

    //Create Menu
    printf("Menu :- \n 1.Add \n 2.Subtract\n 3.Multiply\n 4.Divide\n"   );

    int choice=0;
    
    while (1) {
        printf("Enter choice : ");
        scanf("%d",&choice);
        
        if (choice==1 || choice==2 || choice==3 || choice==4) {
            break;
        }

        printf("Invalid choice!\n");
    }

    int result = 0;

    if (choice==1) {
        result = a + b;
    }
    else if(choice==2){
        result = a-b;
    }
    else if (choice==3) {
        result = a*b;
    }
    else {
        result = a/b;
    }

    printf("Result as per your choice : %d \n", result);

}
