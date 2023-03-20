/*4. Write a function to transform string into uppercase*/ 
#include<stdio.h>
#include<string.h>
void strupper(char str[])
{
    char k;
    str[strlen(str)]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        k=str[i];
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=k-32;
        }
    }
    printf("%s",str);
}
int main()
{
    printf("\nenter string :");
    char str[100];
    gets(str);
    strupper(str);
}