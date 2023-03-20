/*10. Write a function to find the repeated character in a given string*/
#include<stdio.h>
int main()
{
    int str[11];
    int s[11];
    printf("\nenter string :");
    for (int i = 0;i<10 ; i++)
    {
        scanf("%d",&str[i]);
    }
    for (int i = 0;i<11; i++)
    {
        s[i+1]=str[i];
    }
    for (int i = 0; i<11; i++)
    {
        printf("%d",s[i]);
    }
}