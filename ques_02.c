#include <stdio.h>

int main(){
    int n;
    printf("Enter Number =>");
    scanf("%d",&n);
    printf("multiplication of given number is \n");
    for(int i=n;i<=n*10;i+=n)
    {
        printf("%d ",i);
    }
    return 0;
}