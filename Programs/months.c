// WAP to print the number of days in a month using functions. Eg:- Month 1 has 31 days..

#include<stdio.h>
#define N 12
void months(int arr[N]){
	int n = 31;
	for(int i=0;i<N;i++){
		if(arr[i]==0){
			arr[i]=n-3;
		}else{
			arr[i]=n;
			n-1;
		}
		n+1;
	}
}

int main(){
	int arr[N];
	for(int i=0;i<N;i++){
		printf("Month %d has %d days.",i+1,months(arr[i]));
	}
	return 0;
}