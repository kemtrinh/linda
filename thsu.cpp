#include <stdio.h>
int main(void){
int y;
int x;
int z;
scanf("%d%d",&x,&y);
if (x >= 4) 
if (y < 2)
z = x + y + 2;
else
z = x+y;
else if(y>2) 
z = x + y - 2;
else
z = x + y + 1;
printf("%d\n",z);
return 0;
}