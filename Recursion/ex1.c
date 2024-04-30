#include<stdio.h>

 void fun(int n){
    if(n==1){
        printf("nitish");
    }
    else{
        printf("\nnitish");
        fun(n-1);
    }
 }

    int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    fun(n);
}