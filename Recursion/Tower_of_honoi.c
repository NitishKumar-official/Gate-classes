#include<stdio.h>
void TOH(int n,char source, char dest, char aux)
{
    if(n==1)
    {
    printf("%c -> %c\n",source,dest);
    return;
    }
    else{
        TOH(n-1,source,aux,dest);
        printf("%c -> %c\n",source,dest);
        TOH(n-1,aux,dest,source);
    }
}
int main(){
    int n;
    char A, B ,C;
    printf("ente n");
    scanf("%d",&n);
    TOH(n,'A','C','B');

}