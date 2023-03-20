/*7. Write a function to check whether a given string is palindrome or not.*/
#include<stdio.h>
#include<string.h>
int pallindrome(char str[])
{
    int j;
    int k=1;
    j=strlen(str)-1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[j--])
        {
            k=1;   
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    printf("\nenter string :");
    gets(str);
    if(pallindrome(str)!=0)
    {
        printf("\npallindrome stirng ");
    }
    else{
        printf("\nnot a pallindrome stirng ");
    }
    return 0;
}
