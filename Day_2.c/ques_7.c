#include<stdio.h>
int main(){
    int n,d,product=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("The product of a given number is %d",product);
    return 0;
}