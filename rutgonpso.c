#include<stdio.h>
struct phanso
{
	int tu;
	int mau;
};
int so_chia_het(int tu, int mau)
{
	int privot;
	if(tu > mau)
	{
		privot = tu;
			
	}
	else
	{
		privot = mau;
	}
	// rut gon bang cach tim so chia het cho tu va mau, i chay tu n den phan tu lon nhat
	for(int i = 2; i <= privot; i++)
	{
		if(tu%i == 0 && mau%i == 0)
		{
			return i;
		}
	}	
}
main()
{
	struct phanso p1;
	printf("Nhap tu so: ");scanf("%d", &p1.tu);
	printf("Nhap mau so: ");scanf("%d", &p1.mau);
	printf("\nPhan so rut gon la: %d/%d", p1.tu/so_chia_het(p1.tu, p1.mau),  p1.mau/so_chia_het(p1.tu, p1.mau));
}