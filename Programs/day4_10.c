Input date, month and year from the user, and using switch case, display in worded format. e.g. input: d=16, m=7, y=1992
Output: 16th July, 1992

#include <stdio.h>

int main(){
	int d,month,y;
	printf("Enter the date: ");
	scanf("%d",&d);
	printf("Enter the month: ");
	scanf("%d",&month);
	printf("Enter the year: ");
	scanf("%d",&y);
	printf("%d ",d);
	switch(month){
		case 1:
			printf("January,");
			break;
		case 2:
			printf("February,");
			break;
		case 3:
			printf("March,");
			break;
		case 4:
			printf("April,");
			break;
		case 5:
			printf("May,");
			break;
		case 6:
			printf("June,");
			break;
		case 7:
			printf("July,");
			break;
		case 8:
			printf("August,");
			break;
		case 9:
			printf("September,");
			break;
		case 10:
			printf("October,");
			break;
		case 11:
			printf("November,");
			break;
		case 12:
			printf("December,");
			break;

	}
	printf(" %d",y);
return 0;

}
