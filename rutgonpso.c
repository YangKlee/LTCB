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
	// rut gon bang cach tim so chia het cho tu va mau, i chay tu 2 den phan tu lon nhat
	for(int i = privot; i >= 2; i--)
	{
		if(tu%i == 0 && mau%i == 0)
		{
			return i;
		}

	}
	return 0;


}
main()
{
	struct phanso p1;
	printf("Nhap tu so: ");scanf("%d", &p1.tu);
	printf("Nhap mau so: ");scanf("%d", &p1.mau);
	if(so_chia_het(p1.tu, p1.mau) != 0)
	{
		printf("\nPhan so rut gon la: %d/%d", p1.tu/so_chia_het(p1.tu, p1.mau),  p1.mau/so_chia_het(p1.tu, p1.mau));
	}
	else
	{
		printf("\nPhan so hong the rut gon");
	}
	
}