#include<stdio.h>
int jai(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,pp,np;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n<2)
    {
        pp=1000000;
    }
    for(int i=n+1;i<100000;i++)
    {
        if(jai(i)==1)
        {
            np=i;
            printf("np=%d\n",np);
            break;
        }
    }
    for(int i=n-1;i>1;i--)
    {
        if(jai(i)==1)
        {
            pp=i;
            printf("PP=%d\n",pp);
            break;
        }
    }
    if((np-n)<=(n-pp))
    {
        printf("nearest prime is %d\n",np);
    }
    else {
        printf("Nearest prime is %d\n",pp);
        
    }
}