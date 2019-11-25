#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
int F (int n)
{
	int x,y;
	x=n;
	y=n;
	while(y!=0)
	{
		x=x+2;
		y=y-1;
	}
	return(x);
} 
main()
{
	int a,b,c;
	printf("taper un nbr entier: ");
	scanf("%d",&a);
	printf("le resultat est:%d",F(a));
}
