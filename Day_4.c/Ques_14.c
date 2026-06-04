#include <stdio.h>
int main(){
    int n,a,b,sum;
    a=0,b=1;
    printf("Enter Term :");
    scanf("%d",&n);
    printf("Fibonacci series of the Given Number is : ");
    for(int i=2; i<=n; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d ", sum);
    return 0;
}