#include<stdio.h>
struct Hinhhop
{
	float cao;
	float rong;
	float sau;
};
void input_info(Hinhhop &a)
{
	printf("Nhap chieu cao: ");
	scanf("%f", &a.cao);
	printf("Nhap chieu rong: ");
	scanf("%f", &a.rong);
	printf("Nhap chieu sau: ");
	scanf("%f", &a.sau);
}
bool check_lp(Hinhhop a)
{
	if(a.cao == a.rong && a.rong == a.sau)
		return 1;
	return 0;
}
main()
{
	struct Hinhhop C;
	printf("Vui long nhap thong tin hinh hop C: \n");
	input_info(C);
	if(check_lp(C))
		printf("\nC la hinh lap phuong!");
	else
		printf("\nC khong phai la hinh lap phuong");

}

