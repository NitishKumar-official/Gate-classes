// #include<stdio.h>
// int fun(int n){
//     if(n<=9){
//         return n;
//     }
//     else{
//         return n%10 + fun(n/2);
//     }
// }
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d",&n);
//     int sum=fun(n);
//     printf("%d",sum);
//     }
#include<stdio.h>

int fun(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n % 10 + fun(n / 10);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = fun(n);
    printf("Sum of digits: %d", sum);
    return 0;
}