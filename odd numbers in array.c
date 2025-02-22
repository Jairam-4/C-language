#include<stdio.h>
void main(){
    int a[]={1,2,3,6,7,9,10};
    for(int i=0;i<7;i++){
        if(a[i]%2!=0){
            printf("%d\n",a[i]);
        }
    }
}
