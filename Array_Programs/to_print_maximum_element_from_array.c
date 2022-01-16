#include<stdio.h>
void main()
{
    int i,n,max=0;
    int a[100];
    printf("How many Element You Want??\n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if( max < a[i])
        {
            max=a[i];
                       
        }
        
    }
    printf("Max no. is: %d \n",max);
}