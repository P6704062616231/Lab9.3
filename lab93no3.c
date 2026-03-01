#include <stdio.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb);

int main() {
    char login[5][64] = {"user1","user2","user3","user4","user5"};
    char password[5][64] = {"pass1","pass2","pass3","pass4","pass5"};

    char inLogin[64], inPass[64];
    int i, found = 0;
    printf("Enter login : ");
    gets(inLogin);
    printf("Enter password : ");
    gets(inPass);
    for (i = 0; i < 5; i++) {
        if (checkLogin(inLogin, inPass, login[i], password[i]) == 1){
            found = 1;
        }
    }
    if (found == 1)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");
    return 0;
}
int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
    int i, ok = 1;
    i = 0;
    while (login[i] != '\0' || logindb[i] != '\0'){
        if (login[i] != logindb[i]) ok = 0;
        i++;
    }
    i = 0;
    while (passwd[i] != '\0' || passdb[i] != '\0'){
        if (passwd[i] != passdb[i]) ok = 0;
        i++;
    }
    return ok;
}
