#include<stdio.h>
void main()
{
    int i,n,ans;
    printf("Enter Any Number\n");
    scanf("%d",&n);

    for(i=0;i<=10;i++)
    {
        ans=n*i;
        printf(" %d\n",ans);
    }
}