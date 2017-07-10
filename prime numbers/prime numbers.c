#include<stdio.h>
int prime(int);
int main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	prime(x);
	return 0;
}
int prime(int p){
	int n, c=1;
	
	for(n=2; n<p; n++){
		if(p%n==0){
			c++;
			break;
		}
	}
	if(c==1){
		printf("Prime number");
	}else{
		printf("Not Prime number");
	}
}
