#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit;
    int count = 0, sum = 0;

    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}