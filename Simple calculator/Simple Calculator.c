#include <stdio.h>

int main(){
	float a,b,result;
	int choice;
	system("cls");
	
	printf("\nEnter first number: ");
	scanf("%f",&a);
	printf("\nEnter second number: ");
	scanf("%f",&b);
	
	printf("\n1- Take sum");
	printf("\n2- Take product");
	printf("\n3- Take division");
	printf("\n4- Take difference");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			result=a+b;
			printf("\nSum is: %f",result);
			break;
		case 2:
			result=a*b;
			printf("\nProduct is: %f",result);
			break;
		case 3:
			result=a/b;
			printf("\nDivision is: %f",result);
			break;
		case 4:
			result=a-b;
			printf("\nDifference is: %f",result);
			break;
		default:
			printf("\nWrong input");
	}
	getch();
}
