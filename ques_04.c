#include <stdio.h>

int main(){
    int n ,fact=1;
    printf("Enter Number =>");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial of given number is %d ",fact);
    return 0;
}