#include<stdio.h>
#include<math.h>
main()
{
	int n = 0, m_gt = 1;
	int x,e,shc;
	double coss;
	x = 1;
	//e = 5.0e-10;
	//coss = 0.0L;
	while(n <=16)
	{
		m_gt = 1;
		for(int i = 1; i <= 2*n; i++)
		{
			m_gt *= i;
		}
		coss += (pow(-1,n)*(pow(x,2*n)/m_gt));
		//shc = (pow(x,2*n)/m_gt);
		
		n++;
		//printf("%.20lf", coss);
		
		
	}
	printf("%.20Lf\n", coss);
}