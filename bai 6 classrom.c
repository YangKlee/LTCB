#include <stdio.h>
int main()
{
	int m, n, d = 0;
	// Bat buoc m phai be hon n, neu khong thi bat nhao lai
	do
	{
		printf("Nhap m, n (m <n): "); scanf("%d%d", &m, &n); 
	}
	while(m > n);

	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 0 && i % 5 != 0)
		{
			printf("%d\n", i);
			d++;
			
		}
		i++;
	}
	printf("Voi m = %d va n = %d thi ket qua la: %d", m, n, d);

}
