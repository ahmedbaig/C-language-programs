#include<stdio.h>
int pro(float, int);
int main(){
	int x;
	float y;
	printf("Enter float and interger numbers:");
	scanf("%f %d",&y,&x);
	float ans=pro(y,x);
	printf("%f",ans);
	getch();
}
int pro(float f,int n){
	float ans=f*n;
	return ans;
}
