#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	float A, r;
	printf("Enter radius of the circle: ");
	scanf("%f",&r);
	A=3.14*pow(r,2);
	printf("Area of a circle is: %f",A);
	getch();
}
