#include<stdio.h>
void main()
{
    int n,i,sum;
    printf("Enter Any Nature Number\n");
    scanf("%d",&n);
    sum=0;

    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",sum);
    }

}