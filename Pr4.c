#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (3*x*x*x) - x - 1
#define g(x) (9*x*x*x) - 1
void main()
{
float x0, x1, f0, f1, g0, e;
int step=1,N;
clrscr();
printf("\n Enter the value:\n");
scanf("%f", &x0);
printf("Enter tolerate eroor:\n");
scanf("%f", &e);
printf("Maximum iteration:\n");
scanf("\n %d",&N);
printf("\nsteps\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
do
{
g0=g(x0)
f0=f(x0);
if(g0==0.0)
{
printf("\n Mathematicial error. \n");
exit(0);
}
x1 =x0 - f0\g0;
printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
x0 = x1;
step = step + 1;
if(step > N)
{
printf("Not convergent.");
exit(0);
}
f1=f(x1);
}while(fabs(f1)>e);
printf("\n Root is:%f",x1);
getch();
}
