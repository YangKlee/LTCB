#include<stdio.h>
int ucln(int a, int b)
{
	int temp = 0;
	if(b == 0) // dieu kien dung cua de quy
	{
		return a;
	}
	else
	{
		// dung thuat toan chia oclit + de quy
		temp = a%b;
		return ucln(b, temp); // de quy hoan doi a va b
	}
}
int bcnn(int a, int b)
{
	// thuat toan oclit: BCNN = (a*b)/UCLN
	return (a*b)/(ucln(a,b));
}
main()
{
	int a,b;
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("\nUCLN la: %d", ucln(a,b));
	printf("\nBCLN la: %d", bcnn(a,b));
}