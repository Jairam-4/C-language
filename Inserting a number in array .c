#include<stdio.h>
int main()
{
    int n,pos,num;
    printf("Enter the Range of an array:\t");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter %d numbers:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number U Want to insert in array:\t");
    scanf("%d",&num);
    printf("Enter The position to fix in bet(0 to %d) in array:\t",n);
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("You enter the Invalid position");
        return 0;
    }
    for (int i=n;i>=pos;i--)
    {
    a[i]=a[i-1];
    }
    a[pos]=num;
    n++;
    printf("Updated array :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
