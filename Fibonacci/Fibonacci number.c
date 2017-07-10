#include <stdio.h>
int fibo(int);
int main(){
	int result, num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num<0){
		printf("Number does now exits");
	}
	else{
		result=fibo(num);
		printf("\t%d",result);
	}
	return 0;
	getchar();
}
int fibo(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return(fibo(n-1)+fibo(n-2));
	}
}
