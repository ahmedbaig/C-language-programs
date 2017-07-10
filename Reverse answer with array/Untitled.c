#include<stdio.h>

int reverse();
int main(){
	reverse();
	getchar();	
}
int reverse(){
	int a[5];
	
	for(int i=0;i<=5;i++){
		printf("\nEnter number: ");
		scanf("%d",&a[i]);
	}
	printf("\nAnswer in reverse: ");
	
	for(int x=5;x>=0;x--){
		printf("\t%d",a[x]);
	}
}

