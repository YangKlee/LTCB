#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, abc;
	while((pow(a,3)+ pow(b,3)+ pow(c,3) != abc))
	{
		c++;
		if(c >= 10)
		{
			b ++;
			c = 0;
		}
		if(b >= 10)
		{
			a++;
			b = 0;
		}
		int temp = 0;
		temp = (a*10)+b;
		abc = (temp*10)+c;
	}
	printf("A= %d \nB= %d\nC= %d",a,b,c);
}