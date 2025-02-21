//Avrage of n numbers in C
#include<stdio.h>
viod main()
{
    int n,a[n],sum=0;
    printf("Total num of observations=");
    scanf("%d",&n);
    printf("Enter the values=\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",a[i]);
    }
    for(int j=0;j<n;j++)
    {
        sum +=a[i];
    }
    printf("Avg of %d is %d",n,sum/n);
}
