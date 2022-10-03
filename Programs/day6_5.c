#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include <stdbool.h>
int dice(){
	int roll = 1;
	srand(time(0));
	do{
		roll = rand()/1000;
	}while(!(roll>0 && roll <7));
	return roll;
}
void Ladder(int *p1){
	int startLad[]={4,8,21,28,50,71},i,endLad[]={14,30,42,76,67,92},flag=0;
	for(i=0;i<6;i++){
		if(*p1==startLad[i]){
			printf("Hurray!! you found a Ladder :)\n");
			flag =1;
			break;
		}
	}
	if(flag==1)
		*p1=endLad[i];
}
void Snake(int *p1){
	int startSnake[]={32,36,48,62,88,95,97},i,endSnake[]={10,6,26,18,24,56,78},flag=0;
	for(i=0;i<6;i++){
		if(*p1==startSnake[i]){
			printf("You encountered a Snake :(\n");
			flag = 1;
			break;
		}
	}
	if(flag==1){
		*p1=endSnake[i];
	}
}
void Ladder2(int *p2){
	int startLad[]={4,8,21,28,50,71},i,endLad[]={14,30,42,76,67,92},flag=0;
	for(i=0;i<6;i++){
		if(*p2==startLad[i]){
			printf("Hurray!! you found a Ladder :)\n");
			flag =1;
			break;
		}
	}
	if(flag==1)
		*p2=endLad[i];
}
void Snake2(int *p2){
	int startSnake[]={32,36,48,62,88,95,97},i,endSnake[]={10,6,26,18,24,56,78},flag=0;
	for(i=0;i<6;i++){
		if(*p2==startSnake[i]){
			printf("You encountered a Snake :(\n");
			flag = 1;
			break;
		}
	}
	if(flag==1)
		*p2=endSnake[i];
}
bool Check(int *p1,int *p2){
	int flag = 0;
	if(*p1==100)
		return false;
	else if(*p2==100)
		return false; 
}
int main(){
	int player1=0,player2=0,di;
	int *p1,*p2;
	p1=&player1;
	p2=&player2;
	bool WON = false;
	while(!WON){
		getch();
		printf("Enter any key to roll the dice:\n");
		getch();
		di=dice();
		printf("Rolled dice: %d\n",di);
		player1+=di;
		Ladder(p1);
		Snake(p1);
		printf("Position: %d\n",player1);
		getch();
		printf("Player 2 roll dice: \n");
		getch();
		di=dice();
		printf("Rolled dice: %d\n",di);
		player2+=di;
		Ladder2(p2);
		Snake2(p2);
		printf("Position: %d\n",player2);
		Check(p1,p2);
	}	
	printf("Congratulations.. You have won");	
	return 0;
}	
