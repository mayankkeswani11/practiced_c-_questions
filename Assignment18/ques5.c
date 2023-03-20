/*5. Write a function to transform a string into lowercase
*/
#include<stdio.h>
#include<string.h>
void strlower(char str[])
{
    char k;
    for(int i=0;str[i]!='\0';i++)
    {
        k=str[i];
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=k+32;
        }
    }
    printf("%s",str);
}
int main()
{
    printf("\nenter string :");
    char str[100];
    gets(str);
    strlower(str);
}