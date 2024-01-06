#include<stdio.h>
#include<math.h>
int check_ngto(int n)
{ // Ham kiem tra so nguyen to
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
            return 0;
		}
	}
	return 1;
}
void phantich_ngto(int n)
{// Ham phan tich thua so ngto bang de quy
	for(int i = 2; i <= n; i++)
	{
		if(check_ngto(i)) // Neu la so ngto thi moi tach thanh thua so
		{
			if(n%i == 0)
			{
				printf("%d ", i);
				// De quy tach so
				return phantich_ngto(n/i);
			}
		}
	}
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	phantich_ngto(n);
}