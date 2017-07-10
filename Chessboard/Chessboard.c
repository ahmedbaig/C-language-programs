#include <stdio.h>
#include <conio.h>

void checkbox(void);
void main(){
	checkbox();
}
void checkbox(void){
	int c, a;
	for(c=0;c<6;c++){
		for(a=0;a<=6;a++){
			printf("\xdb ");
		}
			printf("\n");
		
             if(c%2==0)
             {
                printf(" ");
             }

	}  
}

