#include<stdio.h>
#include<string.h>
struct SinhVien
{
    char HoTen[30];
    int NhomNganh;
    int TinChi;
};
void nhapsv(struct SinhVien &sv)
{
    printf("Nhap ten: ");
    fflush(stdin);
    gets(sv.HoTen);
    printf("Nhap nhom nganh: ");
    scanf("%d", &sv.NhomNganh);
    printf("Nhap so tin chi: ");
    scanf("%d", &sv.TinChi);

}
int caluate_money(struct SinhVien sv)
{
    if(sv.NhomNganh < 4)
    {
        int list_nhomnganh[] = {349000, 356000, 416000};
        return list_nhomnganh[sv.NhomNganh-1] * sv.TinChi;
    }
    else
    {
        return 0;
    }


}
int main()
{
    struct SinhVien sv1;
    nhapsv(sv1);
    if(caluate_money(sv1))
    {
        printf("Hoc phi cua sinh vien la: %d", caluate_money(sv1));
    }
    else
    {
        printf("Khong the tinh duoc hoc phi");
    }

}
