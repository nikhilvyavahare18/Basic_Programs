#include<stdio.h>
void main()
{ 
	int array[100];
	int n,i,sum=0;
	printf("How Many Elements You Want??\n");
	scanf("%d",&n);
	printf("Enter The Array Elements\n");
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		
	printf("%d\n",array[i]);
	sum=sum+array[i];
	}
	printf("Sum of Array Elements Are\n");
	printf("%d\n",sum);
}
