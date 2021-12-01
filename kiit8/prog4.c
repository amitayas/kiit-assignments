#include <stdio.h>

int length_of(char *s){
    int i = 0;
    while (1) {
        if (s[i]=='\0') {
            return i;
        }
        i++;
    }
    return 0;
}

int main(){
    char s1[30];
    char s2[30];
    printf("Enter string 1 :- \n"); 
    scanf("%[^\n]s", s1);
    while(getchar()!='\n');
    printf("Enter string 2 :- \n");
    scanf("%[^\n]s", s2);
    int l1 = length_of(s1);
    int l2 = length_of(s2);
    char s[l1+l2+1];
    int i = 0;
    for ( i = 0; i < l1; i++) {
        s[i]=s1[i];
    }
    for (int j = 0; j < l2; j++) {
        s[i+j]=s2[j];
    }
    s[l1+l2]='\0';
    printf("Concatenated word : %s\n", s);
}
