//Write a program to add, subtract and multiply two complex numbers using structures.
#include <stdio.h>

typedef struct complex
{
	float real;
	float img;
}complex;
complex add(complex x1, complex x2);
complex sub(complex x1, complex x2);
complex mult(complex x1, complex x2);

int main(){
	complex x1,x2,result;
	int choice = 0;
	printf("Enter the first complex numbers: \n");
	scanf("%f %f",&x1.real,&x1.img);
	printf("Enter the second complex numbers: \n");
	scanf("%f %f",&x2.real,&x2.img);
	printf("Enter the type of operation you want to perform: ");
	scanf("%d",&choice);
	if(choice>3) printf("Enter a valid choice ('1','2','3'). ");
	if(choice==1){
		result = add(x1,x2);
	}else if(choice==2) result = sub(x1,x2);
	else result=mult(x1,x2);
	printf("Result : %f + %fi",result.real,result.img);
	return 0;
}
	complex add(complex x1,complex x2){
		complex temp;
		temp.real = x1.real + x2.real;
		temp.img = x1.img + x2.img;
		return temp;
	}
		complex sub(complex x1,complex x2){
		complex temp;
		temp.real = x1.real - x2.real;
		temp.img = x1.img - x2.img;
		return temp;
	}
		complex mult(complex x1,complex x2){
		complex temp;
		temp.real = x1.real*x2.real - x1.img*x2.real;
		temp.img = x1.real*x2.real + x1.img*x2.real;
		return temp;
    }
