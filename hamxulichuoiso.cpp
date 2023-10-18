#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int n_chan = 0;
int n_le = 0;
int n_ngto = 0;
int n_sum = 0;
/*
Viet chuong trinh su dung ham nhap day so n, cho biet
	+ Co bao nhieu so chan (tru so 0), so le
	+ Co bao nhieu so nguyen to
	+ Tong cac chu so trong day
	+ Co bao nhieu chu so trong day
	+ Trung binh cong cac so trong day
*/
int dem_chan(int chuoi_so)
{
	int so;

	if (chuoi_so == 0)
		return n_chan;
	else
	{
		so = chuoi_so % 10;
		if (so % 2 == 0 && so!= 0)
			n_chan++;
		return dem_chan(chuoi_so / 10);
	}
}
int dem_le(int chuoi_so)
{
	int so;
	if (chuoi_so == 0)
		return n_le;
	else
	{
		so = chuoi_so % 10;
		if (so % 2 != 0)
			n_le++;
		return dem_le(chuoi_so / 10);
	}
}
int check_sont(int chuoi_so)
{
	if (chuoi_so == 0)
	{
		return n_ngto;

	}
	else
	{
		int cout = 0;
		int so = chuoi_so % 10;
		for (int i = 2; i <= sqrt(so); i++)
		{
			if ( so % i == 0)
			{
				cout++;
			}
		}
		if (cout == 0 && so >1)
		{
			n_ngto++;
		}
		return check_sont(chuoi_so / 10);
	}
}
int tongso(int chuoi_so)
{
	if (chuoi_so == 0)
	{
		return n_sum;
	}
	else
	{
		int so = chuoi_so % 10;
		n_sum += so;
		return tongso(chuoi_so / 10);
	}
}
int dem_so(int chuoi_so)
{
	if (chuoi_so < 10)
	{
		return 1;
	}
	else
	{
		return 1 + dem_so(chuoi_so / 10);
	}
}
int trungbinhcong(int chuoi_so)
{
	return n_sum / dem_so(chuoi_so);
}

int main()
{
	int chuoi_so;
	printf("Nhap day so bat ky: "); scanf("%d", &chuoi_so);
	printf("Day so co %d so chan va %d so le\n", dem_chan(chuoi_so), dem_le(chuoi_so));
	printf("Day so co %d so nguyen to\n", check_sont(chuoi_so));
	printf("Tong cac chu so trong day la %d\n", tongso(chuoi_so));
	printf("Day so tren co %d chu so\n", dem_so(chuoi_so));
	printf("Trung binh cong cac so trong day la: %d", trungbinhcong(chuoi_so));

}
