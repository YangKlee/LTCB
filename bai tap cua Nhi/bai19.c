#include<stdio.h>
#include<math.h>
main()
{
	int n = 0, m_gt = 1;
	double coss,x,e,shc;
	x = 1.0;
	//e = 5.0;
	//coss = x;
	while(n<10)
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
	printf("%.20lf", coss);
}