#include <stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int arm=n;
    while(arm!=0){  
        count++;
        arm=arm/10;
    }
    arm=n;
    while(arm!=0){
        sum=sum+pow(arm%10,count);
        arm=arm/10;
    }
    if(sum==n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}