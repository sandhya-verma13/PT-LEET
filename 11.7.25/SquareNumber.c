#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,r=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        sum+=pow(r,2);
        num=num/10;
    }
    printf("%d",sum);
}
