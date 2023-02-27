#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x * x * x) - x -1
void main()
{
float x0,x1,x2,f0,f1,f2,e;
int step=1;
clrscr();
up:
printf("\n Enter the values of x0 and x1\n");
scanf("%f%f", &x0, &x1);
printf("Enter tolerate eroor:\n");
scanf("%f", &e);
f0=f(x0);
f1=f(x1);
if( f0 * f1 > 0.0)
{
printf("Incorrect inicial gusses. \n");
goto up;
}
printf("\nsteps\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
do
{
x2 = (x0 + x1)/2;
f2 = f(x2);
printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
if( f0 * f2 < 0)
{
x1 = x2;
f1 = f2;
}
else
{
x0 = x2;
f0 = f2;
}
step = step + 1;
}
while(fabs(f2)>e);
printf("\n Root is:%f",x2);
getch();
}
