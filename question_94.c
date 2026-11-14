#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start = 0;
    int length = 0, maxLength = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {

        if(str[i] == ' ' ||
           str[i] == '\n' ||
           str[i] == '\0') {

            length = i - start;

            if(length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: ");

    for(i = maxStart; i < maxStart + maxLength; i++)
        printf("%c", str[i]);

    return 0;
}