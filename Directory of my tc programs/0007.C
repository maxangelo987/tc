/* (7) Determining the roots of a Quadratic Equation:
ax^2+bx+c=0 
(infinite for loop, break, if-else if functions) <Comp1/MATH1> */

#include<stdio.h>
#include<math.h>

main()
{

float a,b,c,d,x1,x2;
int n;
clrscr();

printf("This Program let's you: Determine the roots of a Quadratic Equation.\n");
printf("ax^2+bx+c=0");


for (;;){

printf("\na= ");
scanf("%f",&a);
printf("b= ");
scanf("%f",&b);
printf("c= ");
scanf("%f",&c);

d=(b*b)-(4*a*c);

if (a==0)
{
printf("Undefined dividing by Zero!\n");
printf("\n\nPress [1] to End or any numbers to continue:\n\n");
printf("Continue? Enter:\t");
scanf("%d",&n);

	if (n==1)
		{
		printf("\n\nThankyou for using my program!\nCreated by Max.\nPress [ENTER] to exit.");
		break;
		}

		else if (n!=1)
		{
		continue;
		}
}


else if (d>=0)

{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
	printf("x1= %.2f/ x2= %.2f\n",x1,x2);
	printf("\n\nPress [1] to End or any numbers to continue:\n\n");
printf("Continue? Enter\t");
scanf("%d",&n);

	if (n==1)
		{
		printf("\n\nThankyou for using my program!\nCreated by Max.\nPress [ENTER] to exit.");
		break;
		}

		else if (n!=1)
		{
		continue;
		}

	}


else
{
printf("Math Error!\n");
printf("\n\nPress [1] to End or any numbers to continue:\n\n");
printf("Continue? Enter:\t");
scanf("%d",&n);

	if (n==1)
		{
		printf("\n\nThankyou for using my program!\nCreated by Max.\nPress [ENTER] to exit.");
		break;
		}

		else if (n!=1)
		{
		continue;
		}

}
break;

}


getch();
}


