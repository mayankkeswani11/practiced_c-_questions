/*6. Write a program to print the strings which are palindrome in the list of strings.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("\nhow many string you wamnt to check :");
    scanf("%d",&n);
    char str[n][20];
    //this for loop is for taking input from user 
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    //this for loop for printing the input which you taken
    printf("\nthe entred strings are :");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    int k;
    int flag=0;
    printf("\nthe palindrome string are :");
    for(int i=0;i<n;i++)
    {
        k=strlen(str[i])-1;
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]==str[i][k])
            {
                flag=1;
                k--;
            }
            else{
                flag=0;
                break;
            }
            
        }
        if(flag==1)
        {
            printf("%s",str[i]);
             printf("\n");
        }
       
    }
    
}