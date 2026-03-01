#include <stdio.h>
#define MAX 200
int sumDigitChar(char s[]);
void main() {
    char text[MAX];
    printf("Enter input: ");
    gets(text);

    printf("Sum of digit char: %d\n", sumDigitChar(text));
}
int sumDigitChar(char s[]) {
    int i = 0, sum = 0;
    while (i < MAX && s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9')
            sum += (s[i] - '0');
        i++;
    }
    return sum;
}
