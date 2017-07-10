#include <stdio.h>

int main(){
	int table, ans, x;
	printf("Enter any number ");
	scanf("%d",&table);
	for(x=1;x<=10;x++){
		ans=table*x;
		printf("\n\t%d x %d = %d",table,x,ans);
	}
	getch();
}
