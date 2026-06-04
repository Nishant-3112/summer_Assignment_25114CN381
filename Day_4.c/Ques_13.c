#include<stdio.h>
int main(){
    int n, a,b,sum;
    a=0,b=1;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ", a, b);
    for(int i=2; i<=n; i++){
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    return 0;
}