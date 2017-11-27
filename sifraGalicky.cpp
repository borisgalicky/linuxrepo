/*
Author: Boris Galický, 1.N
Date: 23-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char z;
	FILE *f;
	f=fopen("encodedText.txt","r");
	if(f==NULL)
	{
	printf("Can't find file!");
	}
	while((z=fgetc(f))!=EOF)//naèítava do premennej "z" každý znak zo súboru, na ktorý ukazuje smerník "f"
	{
		if(z=='%')
		{
		printf(" ");
		}
		
		else if(z=='j' or z=='J')
		{
		z=(z+15);
		putchar(z);
		}
		
		else if(z=='z' or z=='Z')
		{
		z=(z-17);
		putchar(z);
		}
		
		else if((z>='a' and z<='i') or (z>='k' and z<='y') or (z>='A' and z<='I') or (z>='K' and z<='Y'))
		{
		z=(z-1);
		putchar(z);
		}
		
		else
		{
		putchar(z);
		}
	}
}
