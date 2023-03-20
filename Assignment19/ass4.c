/*5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("\nhow many emails you want to check :");
    scanf("%d",&n);
    char emails[n][50];
    printf("\nenter %d emails :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",emails[i]);
    }
    printf("\nthe entered emails are :");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",emails[i]);
    }
    int k=0;
    printf("\nthe odd emails are :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;emails[i][j]!='\0';j++)
        {
            if(emails[i][j]==64)
            {
                k=1;
                break;
            }
            else{
                k=0;
            }
        }
        if(k==0)
        {
            printf("\n%s",emails[i]);
        }
    }
    
}