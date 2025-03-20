#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range of an array:\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,fc=0,c=0;
    printf("Enter the number to search in the array:\t");
    scanf("%d",&b);
    for (int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            fc=1;
            c=i;
        }
    } if(fc==0)
    {
        printf("%d is not Found your number ",b);
    }else {
        printf("Found \nIn position :%d\nIn array index position :a[%d]",c+1,c);
    } return 0;
}
