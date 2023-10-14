#include<stdio.h>
int main()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			if (a * b == 2 * (a + b))
			{
				printf("Ket qua la %d\n", 10 * a + b);
			}
		}
	}
}