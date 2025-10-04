#include<stdio.h>

int main(){
	
	int num,num2,sum=0,digit;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	num2=num;
	
	while(num>0){
		
		digit = num%10;
		sum = sum+(num*num*num);
		num = num/10;
	}
	if (sum = num2){
		printf("Armstrong Number");
	} else{
		printf("Not Armstrong");
	}
	
}
