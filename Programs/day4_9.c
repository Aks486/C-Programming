WAP to read a string from the user and find the length of string


#include <stdio.>
#define N 100

int main(){

	char str[N];
	int count =0;
	printf("Enter the string: ");
	scanf("%s",str);
	for(int i=0;i<N;i++){
		if(str[i]!='\0'){
			count++;
		}
	}
	printf("%d",count);
}