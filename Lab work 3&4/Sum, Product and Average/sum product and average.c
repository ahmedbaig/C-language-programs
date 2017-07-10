#include <stdio.h>
#include <conio.h>

int main(){
	float a, b, c, d, result;
	int choice;
	printf("Enter four floating numbers: ");
	scanf("\n%f",&a);
	scanf("\n%f",&b);
	scanf("\n%f",&c);
	scanf("\n%f",&d);
	printf("\n************************");
	printf("\n1-Amount in sum");
	printf("\n2-Amount in product");
	printf("\n3-Average of amount");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			result=a+b+c+d;
			printf("Sum of your amount: %f", result);
			break;
		case 2:
		result=a*b*c*d;
		printf("product of amount: %f", result);
			break;
		case 3:
		result=(a+b+c+d)/4;
		printf("average of your amount: %f", result);
			break;
		default:
		    printf("you did something wrong"); 
	}
	return result;
}
