#include<stdio.h>
int main()
{
	for (int i = 10; i <= 99; i++)
	{
		if ((i / 10) * (i % 10) == 2 * ((i / 10) + (i % 10)))
			printf("%d\n", i);

	}
}