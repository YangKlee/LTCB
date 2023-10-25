#include<stdio.h>
int tong_chan = 0;
int input()
{
	int n;
	printf("Nhap day so nguyen: ");
	scanf("%d", &n);
	return n;
}
void print(int n)
{
	printf("Day so nguyen vua nhap la: %d\n", n);
}
int sum_chan(int n)
{
	int num, sum = 0;
	do
	{
		num = n % 10;
		if (num % 2 == 0 && num != 0)
		{
			sum += num;
		}
		n = n / 10;
	} while (num != 0);
	return sum;
}
int sum_dequy(int n)
{
	int num;
	if (n == 0)
	{
		return tong_chan;
	}
	else
	{
		num = n % 10;
		if (num % 2 == 0)
		{
			tong_chan += num;
		}
		return sum_dequy(n / 10);

	}

}
int main()
{
	int n = 0;
	n= input();
	print(n);
	printf("Tong cac so chan trong day la: %d", sum_dequy(n));


}