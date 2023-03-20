/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][20]={"the","quick","brown","fox","quick"};
    char word1,word2;
    printf("\nenter word1 :");
    scanf("%s",&word1);
    printf("\nenter word2 :");
    scanf("%s",&word2);
    int i,j;
    int count=0;
    for(i=0;i<5;i++)
    {
        if(strcmp(s[i],&word1)==0)
        {
            j=i+i;
            while(strcmp(s[j],&word2)!=0)
            {
                count ++;
                j++;
            }
        }
    }
    printf("%d",count);
}