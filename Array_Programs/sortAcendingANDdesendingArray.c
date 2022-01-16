//Write a C program to sort first half of array in
//ascending order and second half of array in
//descending order.
#include<stdio.h>
void main()
{ 
	int array[100];
	int n,i,temp,j;
	printf("How Many Elements You Want??\n");
	scanf("%d",&n);
	printf("Enter The Array Elements\n");
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			if(array[i]>array[j])
			{
			temp = array[j+1];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		}
	
	}
			for(j=n/2;j<n;j++)
		{
			if(array[i]>array[j])
			{
			temp = array[j+1];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		}
		printf("Storted Array Are\n");
		for(i=0;i<n;i++)
		{
		printf("%d\n",array[i]);
		}

	
}
