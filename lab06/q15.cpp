#include<stdio.h>

int main(){
	int a,b;
	
	printf("Enter 2 numbers: ");
	scanf("%d" "%d",&a,&b);
	
	printf("before swaping a= %d and b= %d\n",a,b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("After swaping a= %d and b= %d",a,b);
	
}
