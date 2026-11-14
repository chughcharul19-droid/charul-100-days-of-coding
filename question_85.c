#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    if(str[length-1] == '\n')
        length--;

    for(i = length-1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}