#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,r=0;
    int count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(sum!=1 && count<=10){
        sum=0;
        while(num>0){
        r=num%10;
        sum+=pow(r,2);
        num=num/10;
    }
    num=sum;
    count++;
    }
    if(sum==1) printf("happy number");
    else printf("Not a happy number");
    return 0;
}
