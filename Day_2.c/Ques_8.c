#include<stdio.h>
int main(){
    int n,d,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int original=n;
    while(n!=0){
        d=n%10;
        reverse=reverse*10+d;
        n=n/10;
    }
    if(original==reverse){
        printf("%d is a palindrome number",original);
    }
    else{
        printf("%d is not a palindrome",original);
    }
    return 0;
}