#include <stdio.h>

/**
 * main -Prints numbers between 00 and 99.
 *
 * Retuirn: Always 0 (Success)
 */
int main(){

	int a = 0;
	int b;
	int c;
	while (a < 10)
	{
		b=0;
		while (b < 10)
		{
			c = 0
			while (c < 10)
			{

				if (!(a==b || b==c || a==c) && (a < b && b < c))
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					putchar(e);
					if (!(a==7 && b==8 && c==9))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
			c++;
		}
		b++;
	}
	a++;
}
putchar('\n');
return (0);
}
