#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, palindrome = 1;

    scanf("%s", str);

    length = strlen(str);

    for(i = 0; i < length/2; i++) {
        if(str[i] != str[length-i-1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}