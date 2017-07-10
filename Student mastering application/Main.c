#include <stdio.h>
#include <conio.h>
int main(){
	int a, b, choice;
	float gpa;
	
	printf("========== Welcome to Student Masters Application==========");
	printf("\nEnter Bachelors GPA ");
	scanf("%f",&gpa);
	printf("\nEnter number of attempts ");
	scanf("%d",&a);
	if(gpa>3.0&&a==1)
	{
	
		printf("             Eligible");
		printf("\n\n         What feild do you want to choose");
		printf("\n           1. computer science");
		printf("\n           2. civil engineering");
		scanf("\n%d",&choice);
		switch (choice)
		{
		case 1:
			printf("\n      Computer Science");	
			printf("\n      *****************");
			//code whatever you want
			break;	
		case 2:
			printf("\n      Civil Engineering");
			printf("\n      ******************");
			//code whatever you want
			break;}	
	}
	else {}
	getch();
}

