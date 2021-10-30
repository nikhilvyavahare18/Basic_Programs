
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter Any Number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        printf("sum of even numbers for 1 to %dis %d\n", n, sum);
    }
}

