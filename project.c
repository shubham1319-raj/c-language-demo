#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "Pass123";   
    char input[20];
    int attempts = 3;

    for (int i = 1; i <= attempts; i++) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strcmp(input, password) == 0) {
            printf("Login Successful\n");
            break;
        } else {
            printf("Incorrect Password\n");
        }

        if (i == attempts) {
            printf("Account Locked\n");
        }
    }

    return 0;
}
