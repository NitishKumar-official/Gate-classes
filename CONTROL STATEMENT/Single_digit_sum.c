#include<stdio.h>
void main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if(n%9==0)
    printf("sum=9");
    else
    printf(" sum= %d",n%9);
}