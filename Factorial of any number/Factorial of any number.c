#include <stdio.h>

int fact();
int main(){
	int x;
	printf("Enter any number to find factorial ");
	scanf("%d",&x);
	fact(x);
}
int fact(int n){
	long int c, fact=1;
	for(c=1;c<=n;c++){
		fact=fact*c;
		printf("\nFactorial of number %d = %ld",c,fact);
	}
	getch();
}
