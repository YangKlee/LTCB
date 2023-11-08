#include<stdio.h>
void chan_le(int n)
{
	if(n %2 == 0 )
	{
		printf("%d la so chan!\n", n);
	}
	else
	{
		printf("%d la so le!\n",n);
	}
}
int main()
{
	int n;
	do
	{
		printf("Nhap so: ");
		scanf("%d", &n);
		if(n!= 0)
		{
			chan_le(n);
		}
	}
	while(n!=0);
	return 0;
}