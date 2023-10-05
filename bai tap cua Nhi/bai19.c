#include<stdio.h>
#include<math.h>
int main()
{
	double e,coss = 0;
	long int x,n, m_gt = 1;
	x = 1;
	n = 1;
	e = 15; //e>0
	while(1)
	{
		m_gt = 1;
		//printf("n= %d\n", n);
		for(int i = 1; i <= (2*n); i++ )
		{
			m_gt = m_gt*i;
			//printf("%d\n", m_gt);
		}
		coss += (pow(-1,n)*(pow(x,2*n)/(m_gt)));
		
		
		if(fabs((pow(-1,n)*(pow(x,2*n)/(m_gt)))) > e )
		{
			break;
		}
		n++;

	
		
	}
	printf("%.20lf", coss);
}