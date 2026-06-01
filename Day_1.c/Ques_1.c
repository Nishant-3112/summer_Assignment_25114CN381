#include<stdio.h>
int main(){
    int n,sum=0;
printf("Enter last natural number upto you want sum => ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    sum=sum+i;
}
printf("The sum of N natural number is %d",sum);  
return 0;
}