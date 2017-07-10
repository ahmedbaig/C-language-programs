#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int A, Bp, B, Cp, C, tc;
	float a, bp, b, cp, c, result;
	
	//math corner
	printf("How many courses have you passed: ");
	scanf("%d",&tc);
	printf("How many C's do you have: ");
	scanf("%d",&C);
	c=C*2;
	printf("How many C plus's do you have: ");
	scanf("%d",&Cp);
	cp=Cp*2.5;
	printf("How many B plus''s do you have: ");
	scanf("%d",&Bp);
	b=B*3;
	printf("How many B's do you have: ");
	scanf("%d",&B);
	bp=Bp*3.5;
	printf("How many A's do you have: ");
	scanf("%d",&A);
	a=A*4;
	result=(a+b+bp+c+cp)/tc;
		
	printf("Your CGPA is: %f",result);
	getch();
	
}
