#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("Enter The Number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
}