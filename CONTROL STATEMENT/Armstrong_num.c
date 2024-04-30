#include<stdio.h>
void main(){
    int temp,sum=0,num,last;
    printf("enter a num");
    scanf("%d",&num);
    temp=num;
   while(num!=0)
   {
    last=num%10;
    sum=sum+last*last*last;
    num=num/10;
   }
   if(sum==temp)
   printf("it is a armstrong number");
   else
   printf("it is not a armstrong number");
}