#include<stdio.h>
#include<conio.h>
void ads();
void main(){
	ads();
}
void ads(){
	
	int n, ID[5] = {1,2,3,4,5}, hp[5]={0},dell[5]={0},toshiba[5]={0};
	int brand_i, hp_c=0, dell_c=0, tosh_c=0,x=-1, y, i,space,rows,k=0,j;
		
		starting: ;
		system("cls");
		//ID for admin panel access is 123
		printf("\nEnter you ID: ");
		scanf("%d",&n);
		
		for(y=0; y<5; y++){
		if(n==ID[y]){
			if(x>4){
			goto admin;
			}
			
			x++;
			loop: ;
			system("cls");
			printf("\t\tHello user %d\n Which brand ad would you like to view: \n1.HP\t2.DELL\t3.TOSHIBA",ID[x]);
			scanf("%d", &brand_i);
				
				
				switch(brand_i){
					case 1:
						hp[x]=n;
						end:
						hp_c++;
						
						//ad
    						for(i=1;i<=4;++i)
    						{
        						for(j=1;j<=i;++j)
        						{
         							  printf("* ");
       							 }
       							 printf("\n");
   								 }
						printf("\nITS HP_%d!!!\n do you want to see another ad?\n 1) yes\t 2) no", hp_c);
						scanf("%d", &y);
						if(y == 1){
							goto end;
						}
						break;
					case 2:
						dell[x]=n;
						end2:
						dell_c++;
						//ad
    					for(i=1;i<=4;++i)
   						 {
     						   for(space=1;space<=4-i;++space)
     							   {
     							      printf("  ");
     									   }
     								   while(k!=2*i-1)
      									  {
       									    printf("* ");
       										    ++k;
      										  }
     											   k=0;
       										 printf("\n");
  											  }
						printf("ITS DELL_%d!!!\n do you want to see another ad?\n 1) yes\t 2) no", dell_c);
						scanf("%d", &y);
						if(y == 1){
							goto end2;
						}else{
						break;}
					case 3:
						toshiba[x]=n;
						end3:
						tosh_c++;
						//ad
    							for(i=4;i>=1;--i)
    								{
      								  for(j=1;j<=i;++j)
     								   {
       								    printf("* ");
       									 }
   										 printf("\n");
  											  }
						printf("ITS TOSHIBA_%d!!!\n do you want to see another ad?\n 1) yes\t 2) no", tosh_c);
						scanf("%d", &y);
						if(y == 1){
							goto end3;
						}
						break;
					default:
						printf("Wrong Input!!!");
						break;
				}//switch
					printf("Do you want to add another brand?\n 1) yes\t 2) no");
					scanf("%d", &brand_i);
					if(brand_i == 1){
					goto loop;
					}
			}//if statement
			else if(n==123){
				goto admin;
			}
			
		}//for
		if(x<4){
			goto starting;
		}
		
			admin: ;
				system("cls");
				printf("\t\t*****Hello admin*****");
				for(x = 0; x<5; x++){
					if(hp[x] == 0&&dell[x] == 0&&toshiba[x]){
						printf(" ");
					}//inner if statement
					printf("\n**************************************************************\n|\tUser\t|ADs Associated\t\t\t\t| ");
					printf("\n\tID:%d \t HP:%d\t\n",ID[x],hp[x]);	
					printf("\n\tID:%d \t DELL:%d\t\n",ID[x],dell[x]);
					printf("\n\tID:%d \t TOSHIBA:%d\t\n",ID[x],toshiba[x]);
					}//for loop
					printf("\n**************************************************************\n|\tBrand\t|ADs Played\t\t\t\t| ");
					printf("\n\tHP\t\t%d\t\t%d\n",hp[x],hp_c);printf("\n\tDELL\t\t%d\t\t%d\n",dell[x],dell_c);printf("\n\tTOSHIBA\t\t%d\t\t%d\n",toshiba[x],tosh_c);
						
		getch();
}
