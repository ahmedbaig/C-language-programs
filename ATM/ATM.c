#include <stdio.h>

int main(){
	int pin[4] = {1234, 2245, 4321, 9809};

	int rpin, i;
	printf("Enter Your pin: ");
	scanf("%d",&rpin);
	
		if(rpin == pin[0] || rpin == pin[1] || rpin == pin[2] || rpin == pin[3]){
			printf("%d", rpin);
		} 
		else{
			printf("wrong input");
		}
		
		
}
