#include<stdio.h>
void main()
{
    int i,n,search,flag=0;
    int a[100];
    printf("How Many Element You Want??\n");
    scanf("%d",&n);
    printf("array Elements are\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the search elements are\n");
    scanf("%d",&search);

    for(i=0;i<=n;i++)
    {
        if(search==a[i])
        {
            flag=1;
            printf("no is found\n");
            break;
        }
    } 
        if(flag==0)
        {
            printf("Number Is not Found\n");
        }
    
}