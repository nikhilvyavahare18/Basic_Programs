//Write a C program to copy the elements of one array
//into another array.
#include<stdio.h>
void main()
{
	int array1 [100];
	int array2[100];
	int i,n;
	printf("How Many Elements You Want??\n");
	scanf("%d",&n);
	printf("Enter The Array Elements\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&array1[i]);
	}
	for(i=0;i<n;i++)
	{
	array2[i]=array1[i];
	}
	printf("befor Copy Array\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",array1[i]);
	}
	printf("Afer Copy Array\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",array2[i]);
	}
}