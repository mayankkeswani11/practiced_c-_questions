/*2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("\nenter 10 city names :");
    char city[10][20];
    for(int i=0;i<10;i++)
    {
        scanf("%s",city[i]);
    }
    char temp[20];
    printf("\nthe unsorted city names are :");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",city[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for(int j=0;j<10;j++)
        {
            if(strcmp(city[i],city[j])<0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],temp);
            }
        }
    }
    printf("\nthe sorted city name is :");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",city[i]);
    }
    
}