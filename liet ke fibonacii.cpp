#include<stdio.h>
int main()
{
	int n, k = 3, f = 0, f1 = 1, f2 = 1;
	printf("Nhap n: ");scanf("%d", &n);
	printf("Cac so fibonacii nho hon hoac bang %d la :\n", n);
	printf("f1= %d\nf2= %d\n",f1,f2);
	while(f <= n)
	{
		f = f1+f2;
		if(f >= n)
			break;
		printf("f%d= %d\n", k, f);
		
		f1 = f2;
		f2 = f;
		k++;
	}
	
}