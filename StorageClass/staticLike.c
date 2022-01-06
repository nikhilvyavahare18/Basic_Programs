#include<stdio.h>

void dolike()
{
   static int like=0;
   //int like=0;
   like ++;
       printf("%d\n",like);
}

void main()
{
    dolike();
    dolike();
	dolike();
	dolike();
	dolike();


}