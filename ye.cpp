
#include <stdio.h>
int number = 0;
int temp;
/*
Viet chuong trinh su dung ham nhap day so n, cho biet
	+ Co bao nhieu so chan (tru so 0), so le
	+ Co bao nhieu so nguyen to
	+ Tong cac chu so trong day
	+ Co bao nhieu chu so trong day
	+ Min, Max
	+ Trung binh cong cac so trong day
*/

int dem_chan(int chuoi_so)
{
	int n = 0, so;
	if (chuoi_so == 0)
		return n;
	else
	{
		so = chuoi_so % 10;
		if (so % 2 == 0)
			n++;
		return dem_chan(chuoi_so / 10);

	}


}
int dem_le(int chuoi_so)
{
	int n = 0, so;
	if (chuoi_so == 0)
		return n;
	else
	{
		so = chuoi_so % 10;
		if (so % 2 != 0)
			n++;
		return dem_le(chuoi_so / 10);

	}
}

int main()
{
	int chuoi_so;
	printf("Nhap day so bat ky: "); scanf("%d", &chuoi_so);
	printf("Day so co %d so chan va %d so le", dem_chan(chuoi_so), dem_le(chuoi_so));

}
