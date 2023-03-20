/*9. Write a function to reverse a string word wise. (For example if the given string is 
“Mysirg Education Services” then the resulting string should be “Services Education 
Mysirg” )*/
#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    char str2[30];
    int j;
    for (int i = 0; str[i]!='\0'; i++)
    {
        str2[i+1]=str[i];
    }
    str2[0]=' ';
    for (int i = 0; str[i]!='\0'; i++)
    {
        str[i]=str2[i];
    }
    str[strlen(str)]=32;

    for(int i=strlen(str)-2;i>=0;i--)
    {
        if(str[i]==32)
        {
            j=i+1;
            while(str[j]!=32)
            {
                printf("%c",str[j]);
                j++;
            }
            printf(" ");
        }
        
    }

}
int main()
{
    printf("\nenter string :");
    char str[30];
    gets(str);
    
    reverse(str);
}