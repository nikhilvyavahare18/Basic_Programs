// Que3:Write a C program to print count of number characters in given string.
#include<stdio.h>
void main()
{
    int i=0,count=0;
    char string[100];
    printf("Enter The String\n");
    fgets(string,100,stdin);
   

    for(i=0;string[i]!='\0';i++)
    {
       if(string[i]=' ')
        {
            count++;
        }

    }
    printf("%d\n",count);
}