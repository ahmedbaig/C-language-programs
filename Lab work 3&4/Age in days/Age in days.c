#include <stdio.h>
#include <conio.h>

int main(){
	float year, age;
	printf("Enter year you were born: ");
	scanf("%f",&year);
	age=2016-year;
	printf("\nYour age in years: %f",age);
	age*=365;
	printf("\nYou age in date: %f",age);
	getch();
}
