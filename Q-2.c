// Q.2 Write a Program to create a login mechanism by entering the right email & password. 
// 	You can compare it with your desired email & password.

#include <stdio.h>
#include <string.h>

int main()
{
    char email[50] = "admin@gmail.com";
    char password[20] = "123456";
    char input_email[50];
    char input_password[20];

    printf("Enter your email: ");
    scanf("%s", input_email);

    printf("Enter your password: ");
    scanf("%s", input_password);

    if (strcmp(email, input_email) == 0 && strcmp(password, input_password) == 0)
	{
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }
}