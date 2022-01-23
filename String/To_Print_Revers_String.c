/*Que4:Write a C program to accept string and print it in the reverse order.
Eg:
Input String: India is my country
Output String: yrtnuoc ym si aidnI
*/
#include<stdio.h>
void main()
{
    int i=0,count=0;
    char string[100];
    printf("Enter The String\n");
    fgets(string,100,stdin);
    while(string[i]!='\0')
    {
        count ++;
        i++;
    }
    while(count>=0)
    {
        
        printf("%c",string[count]);
        count --;
    }


}