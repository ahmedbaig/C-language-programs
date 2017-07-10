#include<stdio.h>

int main(){
	int a[50],i,big,small,size;
	printf("How many form numbers: ");
	scanf("%d",&size);
	printf("\nEnter %d form numbers:\n", size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
		
	big=a[0];
	for(i=1;i<size;i++)
	if(big<a[i])
		big=a[i];
		printf("\nThis form number is greater: %d",big);
		
	small=a[0];
	for(i=1;i<size;i++)
	if(small>a[i])
		small=a[i];
		printf("\nThis form number is smaller: %d",small);
		
	return 0;
	
}
