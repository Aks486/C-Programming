// Write a C program that take 2 integer sets A[] and B[] as input and prints results of following set operations:
// I. A union B (Write function set_union())
// II. A intersection B (Write function set_intersection())
// III. A-B and B-A (Write function set_difference())


#include <stdio.h>
#define M 20
void set_union(int a[],int b[],int f,int s){
	int n = f+s;
	int newarr[n];
	//Logic

	printf("Union set: { ");	
	for(int i=0;i<n;i++)
		printf("%d ",newarr[i]);
	printf("}");
}
void set_intersection(int a[],int b[],int f,int s){
	printf("Intersection set: { ");
	for(int i=0;i<f;i++){
		for(int j=0;j<s;j++){
			if(a[i]==b[j]){
				printf("%d ",a[i]);				
			}
		}
	}
	printf("}");
}
int set_difference(int a[],int b[],int k,int f,int s){
	int diff = 0;
	for(int i=0;i<f;i++){
		for(int j=0;j<s;j++){
			if(k==1){
				diff=a[i]-b[j];
			}
			else if(k==0){
				diff=b[j]-a[i];
			}
		}
	}
	return diff;
}

int main(){
	int a[100],b[100];
	int n,k,f,s;
	printf("How many values you want to store in first array:\n");
	scanf("%d",&f);
	printf("Enter the values to be stored in the first array:\n");
	for(int i=0;i<f;i++)
		scanf("%d",&a[i]);
	printf("How many values you want to store in second array:\n");
	scanf("%d",&s);
	printf("Enter the values to be stored in the second array:\n");
	for(int j=0;j<s;j++)
		scanf("%d",&b[j]);
	while(1){
	printf("\nEnter the type of operation you want to perform:\n");
	printf("1> To find Union. 2> To find Intersection. 3> To find the difference.\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			set_union(a,b,f,s);
			break;
		case 2:
			set_intersection(a,b,f,s);
			break;
		case 3:
			printf("Enter 1/0 to perform difference operation (Eg:- A-B or B-A):\n");
			scanf("%d",&k);
			printf("Difference: %d ",set_difference(a,b,k,f,s));
			break;	
		default:
			printf("Enter valid number...");
			return 0;	
	}
	}
	return 0;
}