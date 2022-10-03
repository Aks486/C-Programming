Write a function that will scan a character string passed as an argument and convert all lower-case characters into their upper-case equivalents.


#include <stdio.h>
#define N 100


void convert_char(int str[],int n){
	for(int i =0;i<n;i++){
		if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}

int main(){
	char str[N];
	printf("Enter a string: ");
    scanf("%s",str);
    int n =strlen(str);
    printf("%d\n",n);
    convert_char(str,n);
	return 0;
}
