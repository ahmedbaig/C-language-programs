#include <stdio.h>
#include <conio.h>

int main(){
	system("cls");
       int marks;
       char grade;

       printf("\n Enter your Marks = ");
       scanf("%d",&marks);

       switch(marks/10)
      {
         case 10 :  grade='A';
            break;

         case 9 :  grade='A';
            break;

         case 8 :  grade='A';
            break;

         case 7 :  grade='B';
            break;

         case 6 :  grade='C';
            break;

         case 5 :  grade='D';
            break;

         default : grade='F';
      }

       printf("\n Your Grade is = %c",grade);

       getch();
       return 0;
    }
