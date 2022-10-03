Take the price and quantity of items as an input. Write a C function to calculate the sum of the prices. 
Write another C function to calculate the discount according to the following rules:
For total less than Rs.1000, discount is 5%.
For total greater than Rs.1000 but less than Rs.5000, discount is 10%.
For total greater than Rs.5000, discount is 15%.


#include <stdio.h>
#define LESS 1000
#define GREATER 5000
float sum(float price[]){

	float a = 0;
	for(int i=0;i<5;i++){
		a+=price[i];
	}
	return a;
}
float discount(float sum){
	float amount = 0;
	if(sum<LESS){
		amount = sum*0.05;
	}else if(sum>LESS && sum<GREATER){
		amount=sum*0.1;
	}else if(sum>GREATER){
		amount=sum*0.15;
	}
	total = sum - amount
	return total
}
int main(){
	float price[100];
	int quant=0;
	float total = 0;
	printf("Enter the quantity: ");
	scanf("%d",&quant);
	printf("Enter the price of each item: ");
	for(int i = 0;i<quant;i++){
		scanf("%f",&price[i]);
	}
	printf("Total Amount: %f\n",discount());
	return 0;
}
