#include<stdio.h>
void main(){
    int val1,val2,i,num,prod;
    printf("enter first value");
    scanf("%d",&val1);
    printf("enter second value");
    scanf("%d",&val2);

    for(num=val1;num<=val2;num++)
    {
        prod=1;
       for(i=1;i<=num;i++){
        prod=prod*i;
       }
       printf("factoral of%d is %d\n",num,prod);
    }
}