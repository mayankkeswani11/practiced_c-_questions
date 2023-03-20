/*2. Write a function to reverse a string.*/
#include<stdio.h>
#include<string.h>
char reverse(char str[])
{
    char rev[100];
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
        rev[j++]=str[i];
    }
    rev[j]='\0';
    printf("%s",rev);
}
int main()
{
    char str[100];
    printf("\nenter string :");
    gets(str);
    printf("\nreverse string :");
    reverse(str);
    return 0;
}
