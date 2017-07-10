#include<stdio.h>
int loop();
void main(){
	int n;
	scanf("%d",&n)
	loop(n);
	getch();
}
int loop(int x){
	while(x<=50){
		if(x%2==0){
			printf("%d",x);
		}else{
		}
		x++;
	}	
}
