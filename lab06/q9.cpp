#include <stdio.h>
#include <math.h>

int main(){
	int p,final;
	double price=25.50, total;
	
	printf("Enter number of persons in a group: ");
	scanf("%d",&p);
	
	total= price*p;
	final=(int)ceil(total);
	
	printf("The minimum price of a group is = %d", final);
	
	
	
	
}
