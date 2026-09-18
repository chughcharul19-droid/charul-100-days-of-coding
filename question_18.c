#include <stdio.h>

int main() {
    float p;
    scanf("%f", &p);

    if (p >= 90 && p <= 100)
        printf("Grade A");
    else if (p >= 80)
        printf("Grade B");
    else if (p >= 70)
        printf("Grade C");
    else if (p >= 60)
        printf("Grade D");
    else if (p >= 0)
        printf("Grade F");
    else
        printf("Invalid percentage");

    return 0;
}