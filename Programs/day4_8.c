Write a C program, that reads list of n integer and print sum of product of consecutive numbers. if n=7 and numbers are 4,5,2,5,6,4,7 then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.

#include <stdio.h>
#define N 100

int SOP(int arr[],int n){
	int arr1[N];
	int k =0;
	for(int i = 0;i<n;i++){
		arr[i]*arr[i+1]=arr1[k]
		k++;
		arr1[k]+=arr[k];
	}
	printf("%d",arr1);		
}




int main(){
	int n;
	int arr[N];
	printf("Enter the how many number you want to perfrom the SOP operation: ");
	scanf("%d",&n);
	printf("Enter the numbers: \n");
	for(int i = 0;i<n;i++){
		scanf("%d",arr[i]);
	}
	SOP(arr,n);

	return 0;
}