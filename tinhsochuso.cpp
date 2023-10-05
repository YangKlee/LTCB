//viet code tinh tong chu so cua day so
#include<stdio.h>
int main()
{
	int n,num,d = 0;
	printf("Nhap day so: ");scanf("%d", &n);
	while(1)
	{	
		if(n/10 == 0 && n%10 == n)
		{
			d++	;
			break;
		}
		n = n/10;
		d++	;
				
	}
	printf("Day so co %d chu so", d);
}
