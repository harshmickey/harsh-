#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l;
	clrscr();
	for (i=0;i<4;i++)
	{
		for (l=i;l<4;l++)
		{
			printf (" ");
		}
		for (j=0;j<=i;j++)
		{
			printf (" *");
		}

		printf ("\n");
	}
	for (i=0;i<3;i++)
	{
		for (l=i+1;l>=0;l--)
		{
			printf (" ");
		}
		for (j=i;j<3;j++)
		{
			printf (" *");
		}
		printf ("\n");
	}
	getch();
}