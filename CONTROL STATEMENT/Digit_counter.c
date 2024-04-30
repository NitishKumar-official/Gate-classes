#include<stdio.h>
void main(){
    int n,count=0;
    printf("enter a num");
    scanf("%d",&n);

 while(n!=0)
 {
    //int rem=n%10;
    
    n=n/10;
    count++;
 }
 if(count==0)
 count=1;
 printf("%d",count);
}