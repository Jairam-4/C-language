#include<stdio.h>
int main()
{
  int n;
printf("Enter therange of an array\t");
scanf("%d",&n);
int a[n];
printf("Enter %d numbers\n");
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Transval is:\n");
for (int i=0;i<n;i++){
printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}

  
