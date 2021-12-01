#include <stdio.h>

int string_length(char* str){
    int len=0;
    while (1) {
        if (str[len]=='\0') {
            return len;
        }
        len++;
    }
}
int is_palindrome(char* s){
    int n = string_length(s);
    for (int i = 0; i < (n/2); i++) {
        if (s[i]!=s[n-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char s[30];
    printf("Enter string to check for palindrome : ");
    scanf("%[^\n]s", s);
    if (is_palindrome(s)) {
        printf("YES!\n");
    }
}
