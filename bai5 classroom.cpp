#include <stdio.h>
int main()
{
	int m = 0, n;
	do
	{
		printf("Nhap so bat ky: "); scanf("%d", &n);
		if (n > m)
		{
			m = n;
		}		
	} 
	//while(n <= 0); De sai vi neu n <= 0 thi vong lap chi chay duoc 1 lan vi n luon > 0
	while(n != 0); 
	printf("So lon nhat la: %d", m);
}