/*Write a function to calculate length of the string
3. Write a function to compare two strings.





*/
#include<stdio.h>
char fun(char str[])
{
    int i;
    int count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;

}
int main()
{
    char str[100];
    printf("\nenter string :");
    gets(str);
    printf("\nthe length of string is :%d",fun(str));
    return 0;
}