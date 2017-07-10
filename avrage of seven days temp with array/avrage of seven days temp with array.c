#include<stdio.h>

int temp();
int main(){
	temp();
}
int temp(){
	float temp[6], sum=0.0, average;
	for(int x=1;x<=7;x++){
		printf("Enter temperature of day %d: ",x);
		scanf("%f",&temp[x]);	
		sum+=temp[x];
	}	
	average=sum/7;
	printf("\nAverage weather for seven day will be: %f",average);
}
