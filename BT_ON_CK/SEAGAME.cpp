#include<stdio.h>
#include<string.h>
struct ThanhTich{
    char TenDoan[30];
    int soHCV;
    int soHCB;
    int soHCD;

};
void nhap(struct ThanhTich &d, int n)
{
    printf("Nhap ten doan %d: ", n);
    fflush(stdin);
    gets(d.TenDoan);
    printf("Nhap so HCV doan %d: ", n);
    scanf("%d", &d.soHCV);
    printf("Nhap so HCB doan %d: ", n);
    scanf("%d", &d.soHCB);
    printf("Nhap so HCD doan %d: ", n);
    scanf("%d", &d.soHCD);
}
int sosanhthuhang(struct ThanhTich a, struct ThanhTich b)
{
    int point_a = 0;
     int point_b = 0;
    // tinh bang cong diem:
    /*
     * 1 hcv duoc cong 5d
     * 1 hcb duoc cong 3d
     * 1 hcd duong cong 1d
     */
    point_a += a.soHCV*5;
    point_a += a.soHCB*3;
    point_a += a.soHCD*1;

    point_b += b.soHCV*5;
    point_b += b.soHCB*3;
    point_b += b.soHCD*1;
    printf("%d, %d", point_a, point_b);
    if(point_a > point_b)
    {
        return 1;
    }
    else if(point_a < point_b)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct ThanhTich d1, d2;
    printf("Nhap thanh tich doan 1: \n");
    nhap(d1,1);
    printf("Nhap thanh tich doan 2: \n");
    nhap(d2,2);
    if(sosanhthuhang(d1,d2) == 1)
    {
        printf("\nDoan 1 co thu hang cao hon");
    }
    else if(sosanhthuhang(d1,d2) == 2)
    {
        printf("\nDoan 2 co thu hang cao hon");
    }
    else
    {
        printf("Thu hang  hai doan bang nhau");
    }


}