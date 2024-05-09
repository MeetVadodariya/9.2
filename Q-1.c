// Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
// - Password must contain at least one letter, one digit & one special symbol.
// - Password must be at least 6 characters.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[50];
    int i, has_letter = 0, has_digit = 0, has_special = 0;

    printf("Create your password: ");
    scanf("%s", password);

    if (strlen(password) < 6)
	{
        printf("Your password is not Strong. It should be at least 6 characters long.\n");
        return 0;
    }

    for (i = 0; i < strlen(password); i++)
	{
        if (isalpha(password[i])) {
            has_letter = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (password[i] == '@' || password[i] == '$' || password[i] == '!' || password[i] == '%' || password[i] == '*' || password[i] == '?' || password[i] == '&') {
            has_special = 1;
        }
    }

    if (has_letter && has_digit && has_special) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong. It must contain at least one letter, one digit, and one special symbol.\n");
    }
}