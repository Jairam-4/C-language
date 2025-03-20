#include<stdio.h>
int main()
{
    int n,num,fc=0;
    printf("Enrer the Range of an array:\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which number u want to delete:\t");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            fc=1;
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }
    if(fc==0)
    {
        printf("you number is not in this");
    }
    else{
        printf("Updated values after Delete:\t");
        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
