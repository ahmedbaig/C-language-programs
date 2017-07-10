#include <stdio.h>
int main(){
 int x=10, y=5;
 x = x+y;
 y = x-y;
 x = x-y;
 //till here values swaps.
 x = x*y;
 y = x/y;
 x = x/y;
 //now it'll return back to original swap.
 printf("after swapping x=%d and y=%d",x,y);
 getchar();
 return 0;
 }