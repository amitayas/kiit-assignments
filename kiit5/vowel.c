#include <stdio.h>

int check_letter(char c){
    //char letters[] = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];
    int asc = (int)c;
    if((asc>=65 && asc<=90) || (asc>=97 && asc<=122))
        return 1;
    return 0;
}

int check_vowel(char c){
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
        return 1;
    }
    
    return 0;
}

int main ()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);

    switch (check_letter(c)) {
        case 1:
            
            switch (check_vowel(c)) {
                default:
                    printf("%c is a consonant!\n", c);
                    break;
                case 1:
                    printf("%c is a vowel\n", c);
                    break;
            }

            break;

        default:
            printf("%c is not a letter!\n", c);
            break;
    }

    return 0;
}
