#include<stdio.h>
void main()
{
    int x,y,i,ans=1;
    printf("enter the  number\n");
    scanf("%d",&x);
    printf("enter the power number \n");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
        ans=ans*x;
    }
    printf("%d^%d=%d",x,y,ans);
}