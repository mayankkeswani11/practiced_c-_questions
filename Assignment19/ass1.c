/*

7. From the list of IP addresses, check whether all ip addresses are valid.

9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
10. Create an authentication system. It should be menu driven.*/
//#####################################################
/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char vowels[5]={'a','e','i','o','u'};
    printf("\nenter five strings :");
    char str[5][20];
    for(int i=0;i<5;i++)
    {  
        scanf("%s",str[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    int count=0;
    for(int i=0;i<5;i++)
    {
        count=0;
        for(int j=0;j<str[i][j]!='\0';j++)
        {
            for(int k=0;k<5;k++)
            {
                if(vowels[k]==str[i][j])
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }

}