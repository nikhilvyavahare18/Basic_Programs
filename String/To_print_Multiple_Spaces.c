 /*Que2:Write a C program to accept string with multiple spaces from
user and print it with a sinlge space as
a delimiter.
Eg:
 Input String:
 _____India_____is_my_________country______________
 Output String:
 India_is_my_country (Consider _ as space)
 */ 
#include<stdio.h>
void main ()
{
    int i=0;
    char string[100];
    printf("Enter The String\n");
    fgets(string , 100, stdin);

    while(string[i]!='\0')
    {
        while(string[i] ==' ')
        {
            i++;
        }
       while(string[i]!=' ' && string[i]!='\0')
	   {
		   printf("%c",string[i]);
		   i++;
	   }
	   printf(" ");
    }
    
}