#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(a*a*a)+(b*b*b)+(c*c*c)+3*(a*a)+(b*b)+(c*c));
    return 0;
}