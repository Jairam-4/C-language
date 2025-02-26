
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char c;
    while(1){
        scanf("%d",&a);
        scanf("%c",&c);
        switch (c){
 case '+': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%d",a+b);
            break;
 case '-': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%d",a-b);
            break;
case '*': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%d",a*b);
            break;
case '/': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%d",a/b);
            break;
case '%': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%d",a%b);
            break;
case '^': 
            printf("Enter the b value");
            scanf("%d",&b);
            printf("%0f",pow(a,b));
            break;
    default :
    printf("invalid function");
    break;
        }
     return 0;   
    }
}
