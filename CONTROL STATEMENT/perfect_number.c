#include<stdio.h>
void main(){
    int sum=0,n;
    printf("enter a number to cheak for perfect");
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is a perfect number",n);
    }
    else{
        printf("it is not a perfect number");
    }
}