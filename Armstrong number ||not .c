#include<stdio.h>
int main()
{
    int n,m,a,r;
    printf("Enter the number \n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=r%10;
        a=a+r*r*r;
        n=n/10;
    }
    if(a==n)
    {
        printf("%d is an Armstrong number\n",m);
    }
    else
    {
        printf("%d is an Not a Amstrong number\n",m);
    }

}
