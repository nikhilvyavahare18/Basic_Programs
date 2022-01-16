#include<stdio.h>
void main()
{
    int a[100];
    int n,i;
    printf("How many Array Elements You Want??\n");
    scanf("%d",&n);
    printf("Enter The Array Elements \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array Elements Are\n:");
     for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}