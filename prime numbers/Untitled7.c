#include<stdio.h>
int prime(int);
int main(){
	int x=1;
		prime(x);
		return 0;
		getch();
}
int prime(int p){
		printf("\nEnter any number: ");
		scanf("%d",&p);
	
	int n, c=1;
	
	for(n=1; n<p; n++){
		if(p%n==0){
			c++;
			break;
		}
	}
	if(c==1){
		printf("Prime number\n");
	}else{
		printf("Not Prime number\n");
	}
	prime(p);
}
