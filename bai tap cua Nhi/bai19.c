#include<stdio.h>
#include<math.h>
int main()
{
	double e,cos = 0;
	int x,n, m_gt = 0;
	x = 5;
	n = 1;
	e = 7; //e>0
	while(1)
	{
		for(int i = 1; 2*n <=i; i++ )
		{
			m_gt = m_gt*i;
		}
		cos += (pow(-1,n)*(pow(x,2*n)/(m_gt)));
		if(fabs(pow(-1,n))*(pow(x,2*n)/(m_gt)) > e )
		{
			break;
		}
	
		
	}
	printf("%f", cos);
}