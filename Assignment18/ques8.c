/*8. Write a function to count words in a given string*/
#include<stdio.h>
#include<string.h>
char count_words(char str[])
{
    int count=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            ++count;
        }
    }
    return count;
}
int main()
{
    char str[100];
    gets(str);
    printf("\nthe number of words :%d",count_words(str));
    return 0;
}