#include<stdio.h>
int main()
{
    int a=5;
    int *b=&a;
    printf("Value of a=%d\n",a);
    printf("Address of a=%p\n",&a);
    printf("Value of Pointer=%d\n",*b);
    printf("Address of the Poinetr=%p\n",b);
    
}
