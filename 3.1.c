#include<stdio.h>
int main()
{
int x,y;
x=6;
y=3;
printf("x\t\ty\tExpressions\tresults\n");
printf("%d\t\t%d\tx=y+3\t\tx=%d",x,y,y+3);
printf("\n%d\t\t%d\tx=y-2\t\tx=%d",x,y,y-2);
printf("\n%d\t\t%d\tx=y*5\t\tx=%d",x,y,y*5);
printf("\n%d\t\t%d\tx=x/y\t\tx=%d",x,y,x/y);
printf("\n%d\t\t%d\tx=x%y\t\tx=%d",x,y,x%y);
return 0;

}
