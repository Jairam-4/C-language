#include<stdio.h>
int jai(int *a,int *b,int *c)
{
    if(*a>*b &&*a>*c)
    {
        return *a;
    }else if (*b>*a && *b>*c)
    {
        return *b;
    }
    else {
        return *c;
    }
    
}
    int main()
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
       int e= jai(&a,&b,&c);
        printf("%d is the biggest num",e);
    }
