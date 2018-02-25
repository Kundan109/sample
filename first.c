#include<stdio.h>
int main()
{

int i,j,a;
printf("enter no of lines to be printed");
scanf("%d",&a);
for(i=0;i<a;i++)
{
    for(j=0;j<(2*a-1);j++)
    {
        if((i+j)<(a-1) || (j-i)>(a-1))
            printf(" ");
        else
            printf("\xfa");
    }
    printf("\n");
}
return 0;
}
