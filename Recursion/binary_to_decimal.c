#include<stdio.h>
void fun(int n){
    if(n==0||n==1){
        printf("%d",n);
        return;
    }
    else{
        fun(n/2);
        printf("%d",n%2);
    }

}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    fun(n);
}