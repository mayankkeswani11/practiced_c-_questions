#include<stdio.h>
#include<string.h>
int main()
{

    char password[10],username[20];
    char ch;
    int i;
    printf("\nenter your usename :");
    gets(username);
    printf("\nyour password must be of atleast 8 character");
    printf("\nenter the password :");
    for ( i = 0; i < 8; i++)
    {
        ch=getchar();
        password[i]=ch;
        ch='*';
        printf("%c",ch);
    }
    password[i]='\0';
    printf("\nyour password is :");
    for (i = 0; i < 8; i++)
    {
        printf("%c",password[i]);
    }
    
}