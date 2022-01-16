#include<stdio.h>
void main()
{
	int i,n,min,max;
	int array[100];
	printf("How many  Elements You Want??\n");
	scanf("%d",&n);
	printf("Enter Array Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	max=min=array[0];
	for(i=0;i<n;i++)
	{
		if(max>=array[i])
		{
		max=array[i];
		}
		if(min<array[i])
		{
		min=array[i];
		}
	}
		printf("MINIMUM NUMBER IS %d\n",max);
		printf("MAXIMUM NUMBER IS %d\n",min);
}