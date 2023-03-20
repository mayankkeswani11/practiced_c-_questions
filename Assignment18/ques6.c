/*6. Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
#include<string.h>
void alphunumeric(char str[]){
    int k,j;
    str[strlen(str)]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>= 'a' &&str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
        {
            k=1;
        }else{ if(str[i]>= '0' && str[i]<='9')
        {
            j=1;
        }}
    } 
    if(j==1&&k==1)
    {
        printf("\n  alphunumeric string ");
    }
    else{
        printf("\nnot alphunumeric string ");
    }


}
int main()
{
    char str[100];
    gets(str);
    alphunumeric(str);
}