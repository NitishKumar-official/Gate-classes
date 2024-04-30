#include<stdio.h>
void main(){
    int n,i;
    printf("enter a number to cheak it is prime or not");
    scanf("%d",&n);
    if(n==1)
    printf("%d is not prime number",n);

    for( i=2;i<n;i++){
        if(n%i==0)
        {
            printf("%d is not a prime number",n);
            break;
        }
    }
    if(i==n){
        printf("%d is a prime number",n);
    }
}