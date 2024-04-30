#include<stdio.h>
void main(){
    int num,count,temp,temp1,i,last,sum=0,prod=1;
    printf("enter a number");
    scanf("%d",&num);
    temp1=num;
    temp=num;
    while(num!=0){
        num=num/10;
        count++;
    }
    while(temp!=0){
        last=temp%10;
        temp=temp/10;

        for(i=1;i<=count;i++){
            prod=prod*last;
        }
        sum=sum+prod;
    }
    if(temp1==sum)
    printf("armstrong");
    else
    printf("not armstorng");
    
}