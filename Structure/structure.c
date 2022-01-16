#include<stdio.h>

struct emp    // Declaration  Of Structure
{
    int empID ;
    char name[1];
    float salary;

};

void main()
{
    struct emp e;  // Defination Of Structure
    printf("size of structure is: %d",sizeof(e));
    e.empID; // Access The Memeber By Direct Accesing Operator i.e Dot Operator(.)

}