//Palindrome num in C
#include<stdio.h>
void main()
{
    int n,r,rev,m;
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        r=m%10;
        m=m/10;
        rev=rev*10=r;
    }
if( n==rev)
{
    printf("%d is palindrome num");
}
else {
    printf("%d is not a palindrome num");
}
}
