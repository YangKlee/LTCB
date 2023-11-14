#include<stdio.h>
int convert_binary(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return convert_binary(n/2)*10+n%2;
	}
}
main()
{
	int n;
	do
	{	
		
		printf("Nhap so nguyen duong (n > 0): ");
		scanf("%d", &n);
	}
	while(n <=0);
	printf("\nSo nhi phan cua %d la: %08d", n,convert_binary(n));
	
}