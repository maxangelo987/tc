/* (43) Input numbers: 3
Input 3 digits: 1 2 3
Sum of the Powered Values: (1^1)+(2^2)+(3^3)=32
(array, for loop functions) <Comp1/MATH1> */


#include<stdio.h>
#include<math.h >
main()
{

long x[1000],i,s,x1[1000],j,temp;
long x2[1000];
clrscr();

printf("Input Numbers: ");
scanf("%ld",&s);

printf("Input %ld digits: ",s);
for (i=0;i<s;i++)
	{
	scanf("%ld",&x[i]);
	x1[i]=pow(x[i],x[i]);
	}

printf("Sum of the Powered Values: ");
temp=0;

printf("(%ld^%ld)",x[0],x[0]);
for (i=1;i<s;i++)
	{
	printf("+(%ld^%ld)",x[i],x[i]);

	}

for (i=0;i<s;i++)
	{
	x2[i]=x1[i]+temp;
	temp=x2[i];
	}

	printf("=%ld",temp);
getch();
}