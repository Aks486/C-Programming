#include <stdio.h>
#include <math.h>

int main(){
	int choice;
	int s,p,n,l,c,k;
	printf("Enter the type of operation you want to perform: ");
	printf("1) Square root 2) Natural Log 3) log10x 4) Power 5)Cos(x): \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the number you want to find Square root: ");
			scanf("%d",&s);
			printf("The square root of %d is : %d ",s,sqrt(s));
			break;
		case 2:
			printf("Enter the number you want to find the Natural log: ");
			scanf("%d",&n);
			printf("The natural log %d is : %d ",n,log(n));
			break;
		case 3:
			printf("Enter the number you want to find log10x: ");
			scanf("%d",&l);
			printf("The log10x of %d is : %d ",l,log10x(l));
			break;
		case 4:
			printf("Enter the number you want to find power: ");
			scanf("%d%d",&p,&k);
			printf("The power of %d is : %d ",p,power(s,k));
			break;
		case 5:
			printf("Enter the x value to find Cos(x): ");
			scanf("%d",&c);
			printf("Cos(x) of %d is : %d ",c,Cos(c));
			break;
		default:
			printf("Please enter a valid choice (1 - 5).");
			break;
	}

}
