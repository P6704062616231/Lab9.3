#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i;
    printf("Enter the First string:\n");
    gets(str1);
    printf("Enter the Second string (chars to remove in order):\n");
    gets(str2);
    for (i = 0; str2[i] != '\0'; i++) {
        char target = str2[i];
        int pos = -1, j;
        for (j = 0; str1[j] != '\0'; j++) {
            if (str1[j] == target) {
                pos = j;
                break;
            }
        }
        if (pos != -1) {
            for (j = pos; str1[j] != '\0'; j++) {
                str1[j] = str1[j + 1];
            }
            printf("%c : Removed\n", target);
        } else {
            printf("%c : Not found\n", target);
        }
    }
    printf("Result string: %s\n", str1);
    return 0;
}
