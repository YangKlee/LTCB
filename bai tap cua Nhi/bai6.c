#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int gt1 = 1,gt2 = 1,gt3 = 1;
	int n,k,i,gt_ck;
	printf("Nhap giai thua to hop chap k cua n: ");scanf("%d%d", &k, &n);
	if(n>0 && k >0 && k<= n)
	{
		for(int i = 1; i <= n; i++)
		{
			gt1 *= i;
		}
		for(int i = 1; i <= k;i++)
		{
			gt2 *=i;
		}
		for(int i = 1; i <= (n-k); i++)
		{
			gt3 *= i;
		}
		gt_ck = (gt1/(gt2*gt3));
		printf("Giai thua chap k cua n la: %d", gt_ck);
	}
	else
	{
		if(n ==0)
		{
			printf("Giai thua chap k cua n la: %d", 1);
		}
		else
		{
			printf("Deo tinh duoc");
		}
		
	}
}