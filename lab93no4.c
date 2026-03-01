#include <stdio.h>
#define MAX 50
int countVowel(char t[], int *a, int *e, int *ii, int *o, int *u);
void main() {
    char text[MAX];
    int cVowel;
    int ca, ce, ci, co, cu;

    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text, &ca, &ce, &ci, &co, &cu);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    printf("A/a = %d\n", ca);
    printf("E/e = %d\n", ce);
    printf("I/i = %d\n", ci);
    printf("O/o = %d\n", co);
    printf("U/u = %d\n", cu);
}
int countVowel(char t[], int *a, int *e, int *ii, int *o, int *u){
    int i = 0, cVowel = 0;
    *a = *e = *ii = *o = *u = 0;
    while(i < MAX && t[i] != '\0') {
        if (t[i]=='A'||t[i]=='a'){(*a)++; cVowel++;}
        if (t[i]=='E'||t[i]=='e'){(*e)++; cVowel++;}
        if (t[i]=='I'||t[i]=='i'){(*ii)++; cVowel++;}
        if (t[i]=='O'||t[i]=='o'){(*o)++; cVowel++;}
        if (t[i]=='U'||t[i]=='u'){(*u)++; cVowel++;}
        i++;
    }
    return cVowel;
}
