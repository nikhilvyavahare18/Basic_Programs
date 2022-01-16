#include<stdio.h>
void main()
{
int array[100];
int i,n,j,count=0;
printf("How many Elements You Want??\n");
scanf("%d",&n);
printf("Enter The array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(j=0;j<n;j++)
{
count++;
}
printf("Count Of Numbers are\n");
printf("%d\n",count);
}