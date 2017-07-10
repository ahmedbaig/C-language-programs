#include<stdio.h>
int loop();
void main(){
	int n;
	scanf("%d",&n);
	loop(n);
	getch();
}
int loop(int x){
	while(x<=50){
		if(x%2==0){
			printf("\n%d",x);
		}else{
		}
		x++;
	}	
}
