/* (53) Sorting inputs
(array, nested for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
long x[1000],i,count=0,j,temp;
clrscr();

printf("Inputs:");

for(i=0;;i++)
	{
	scanf("%ld",&x[i]);
	count++;
	if(x[i]==0)
		{
		break;
		}
	}

for(i=0;i<count;i++)
	{
	for(j=0;j<count-i;j++)
		{
		if(x[j]>x[j+1])
			{
			temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
			}
		}
	}


for(i=0;i<count;i++)
	{
	printf(" %ld ",x[i]);
	}


getch();
}