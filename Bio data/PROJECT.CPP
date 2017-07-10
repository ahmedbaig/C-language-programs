#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
clrscr();
 //integer property for logic
 int a= 123;
 int b;
 //basic output and input for security
 cout <<"                  password"<<endl;
 cin >>b;
 if(a==b){
 //biodata
 clrscr();
 cout <<"               Access Granted"<<endl;
 cout <<"                  hello"<<endl;
 cout <<"                  -----"<<endl;
 cout <<"Name:             M.Ahmed Baig"<<endl;
 cout <<"Form no.:         0218"<<endl;
 cout <<"Age:              18 years"<<endl;
 cout <<"University:       Sirsyed Universiry"<<endl;
 cout <<"Teacher:          Sir Haris"<<endl;
 }
 else{
 //anti-theft response
 clrscr();
 cout <<"                 Access Denied"<<endl;
 cout<<"tryagain"<<endl;
 }
 getchar();
 return 0;
}