//Que1:Write a C program to accept string with multiple spaces from user and print as it is.
#include<stdio.h>
void main ()
{
    int i,n;
    char string[100];
    printf("Enter The String\n");
    fgets(string,100,stdin);

    printf ("The String Are\n:%s",string);
}