#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int small=a[0];
    for(int i=0;i<n;i++){
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("%d\n",small);
    return 0;
}
