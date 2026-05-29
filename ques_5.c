#include <stdio.h>

int main(){
    int n,ld ,sum=0;
    printf("Enter Number =>");
    scanf("%d",&n);

    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}