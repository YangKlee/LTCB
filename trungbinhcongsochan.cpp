//Viet code tinh trung binh cong so chan trong day
#include<stdio.h>
int main()
{
	int n,num,sum = 0,a = 0;
	printf("Nhap day so: ");scanf("%d", &n);
	while(n!=0)
	{

		if(n/10 == 0 && n%10==n)
		{
			printf("Trung binh cong so chan trong day la: %d", sum/a);
			break;
		}
		num = n%10;
		n = n/10;
		if(num %2 == 0)
		{
			sum += num;
			a++;
		}
		
	}
	
}
