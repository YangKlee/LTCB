#include<stdio.h>
#include<math.h>
int main()
{
	int a=1,b=5,c=3;
	if((pow(a,3)+pow(b,3)+pow(c,3) )== 153)
	{
		printf("True");
	}
	printf("%d", (int)(pow(a,3)+pow(b,3)+pow(c,3)));
}