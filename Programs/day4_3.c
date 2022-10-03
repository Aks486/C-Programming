// 3. WAP to find minimum and maximum elements in a given array using the function int find_max_min(int array[], int size, int *max, int *min);

#include<stdio.h>

int find_max_min(int array[], int size,int *max,int *min){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}

int main(){
	int array[100];
	int size;
	int max,min;
	printf("Enter size of the array:\n");
	scanf("%d",&size);
	printf("Enter the elements:\n");
	for(int i =0;i<size;i++)
		scanf("%d",&array[i]);
	printf("Max: %d Min: %d",find_max_min(array,size,*max,*min));
	return 0;
}