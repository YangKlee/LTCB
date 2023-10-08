#include<stdio.h>
#include<math.h>
int main()
{
	//cho kieu long long de tranh bi tran voi n>=10
	// pham vi kieu du lieu: 0 to 2^64-1
	unsigned long long int gt1 = 1,gt2 = 1,gt3 = 1;
	/*
	Tach ra cho de tinh 
	gt1 = n!
	gt2 = k!
	gt3 = (n-k)!
	*/
	int n,k,gt_ck;
	printf("Nhap giai thua to hop chap k cua n: ");scanf("%d%d", &k, &n);
	if(n>0 && k >0 && k<= n) // dieu kien de to hop xac dinh
	{
		for(int i = 1; i <= n; i++)
		{
			gt1 *= i;
		}
		for(int i = 1; i <= k;i++)
		{
			gt2 *=i;
		}
		for(int i = 1; i <= (n-k); i++)
		{
			gt3 *= i;
		}
		gt_ck = (gt1/(gt2*gt3));
		printf("Giai thua chap k cua n la: %d", gt_ck);
	}
	else
	{
		if(n ==0) // Ngoai le: neu n = 0 thi giai thua se bang 1 voi moi k
		{
			printf("Giai thua chap k cua n la: %d", 1);
		}
		else
		{
			printf("Deo tinh duoc");
		}
		
	}
	/*
	Cac bug con ton tai:
	- Voi n > 20 thi se bi tran du lieu => chua khac phuc
	Bonus: Cho kieu du lieu unsigned long long int van khong khac phuc duoc du pham vi kieu du lieu dap ung duoc
	, nguyen nhan tran do nhan hai so qua lon voi nhau
	chi tiet xem trong file tinhgt.cpp
	
	*/
}