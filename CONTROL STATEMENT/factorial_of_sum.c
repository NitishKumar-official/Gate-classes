#include<stdio.h>
void main(){
    int num,last,prod,i,sum=0,temp;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        last=num%10;
        num=num/10;
        prod=1;
        for(i=1; i<=last;i++){
            prod=prod*i;
        }
        sum=sum+prod;
    }
    if(temp==sum)
    printf("it is a strong number");
    else
     printf("it is not a strong number");
    
}