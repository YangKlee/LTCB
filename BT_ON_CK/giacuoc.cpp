#include<stdio.h>
struct GiaCuoc{
    int so_km, don_gia;
};
void nhap(struct GiaCuoc &user)
{
    printf("Nhap so km: ");
    scanf("%d", &user.so_km);
}
int calc_money(struct GiaCuoc user)
{
    int money = 0;
    if(user.so_km <= 10)
    {
        user.don_gia = 2000;
        money = user.don_gia*user.so_km;
    }
    else if(user.so_km > 10)
    {
        // tinh 10km dau
        {
            user.don_gia = 2000;
            money += user.don_gia*10;
        }
        user.don_gia = 1500;
        money += user.don_gia*(user.so_km-10);
    }
    return money;
}
int main()
{
    struct GiaCuoc user1;
    nhap(user1);
    printf("Thanh tien la: %d", calc_money(user1));
}
