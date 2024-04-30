#include<stdio.h>
int main(){
    int a,b,i,prod;
    printf("enter a base");
    scanf("%d",&b);
    printf("enter power");
    scanf("%d",&a);
    prod=1;
    for(int i=1; i<=a; i++){
        prod= prod*b;
    }
    printf("prod=%d",prod);
}