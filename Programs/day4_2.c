Write a program to swap two numbers using function.


#include <stdio.h>
int swap(int *apr,int *bpr){
	int temp;
	temp = *apr;
	*apr = *bpr;
	*bpr = temp;
}

int main(){
	int a,b;
	printf("Enter the first number you want to swap: ");
	scanf("%d",&a);
	printf("Enter the second number you want to swap: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping: %d  %d",a,b);
	return 0;
}
