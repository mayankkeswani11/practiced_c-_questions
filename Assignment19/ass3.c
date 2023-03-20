/*3. Write a program to read and display a 2D array of strings in C language.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][200];
    for(int i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("\n the strings is :");
    for(int i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
}