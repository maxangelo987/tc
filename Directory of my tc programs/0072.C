/* (72) Enter username (only lower case) then if 
it lower case go directly to password
(strlwr, strlen, for loop functions) <Comp1> */

#include<stdio.h>
main()
{
char name[29],name1[29],pass[29];
long x,i,count;
clrscr();

for (;;)
{
printf("Enter Username (Lowercase): ");
gets(name);
x=strlen(name);

for (i=0;i<x;i++)
	{
	name1[i]=name[i];
	}

strlwr(name1);
count=0;
for (i=0;i<x;i++)
	{
	if (name[i]!=name1[i])
		{
		count++;
		break;
		}
	}

if (count==0)
	{
	printf("Enter Password: ");
	gets(pass);
	break;
	}
	clrscr();


}
getch();
}