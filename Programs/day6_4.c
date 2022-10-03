Write another function to print the individual item prices, total, discount and the final price. Example:

#include <stdio.h>
#define N 5
int item(int n){
	int item[N]={1,2,3,4,5};
	for(int i=0;i<n;i++){
		printf("\nItem %d\n",item[i]);
	}
}
int price(int arr[],int n){

    for(int i =0;i<n;i++){
        printf("\n%d\n",arr[i]);
    }
}
int quantity(int quant[],int n){
    for(int i =0;i<n;i++){
        printf("\n%d\n",quant[i]);
    }
}
int subtotal(int quant[],int arr[],int n){
    int total[500];
    int k =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            total[k] = quant[i]*arr[j];
            k++;
        }
    }
    return total;
}

int main(){
	int n;
	int arr[100];
	int quant[100];
	printf("Enter the total number of items purchased: ");
	scanf("%d",&n);
	printf("Enter the price: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the quantity: \n");
	for(int j=0;j<n;j++){
        scanf("%d",&quant[j]);
	}
	printf("Total: %d ",subtotal(quant,arr,n));
	return 0;

}
