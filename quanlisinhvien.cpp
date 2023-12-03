#include<stdio.h>
#include<string.h>
struct SinhVien
{
    char svcode[100];
    char Name[100];
    char Birth[100];
    char Gender[100];
    char Address[100];
    long int phone;
    char Nganh[100];
};
void nhap_data(struct SinhVien &sv)
{
    printf("Nhap ma sinh vien: ");
    gets(sv.svcode);
    fflush(stdin);
    printf("Nhap ten: ");
    gets(sv.Name);
    fflush(stdin);
    printf("Nhap ngay sinh: ");
    gets(sv.Birth);
    fflush(stdin);
    printf("Nhap gioi tinh: ");
    gets(sv.Gender);
    fflush(stdin);
    printf("Nhap dia chi: ");
    gets(sv.Address);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    scanf("%d", &sv.phone);
    fflush(stdin);
    printf("Nhap nganh hoc: ");
    gets(sv.Nganh);


}
void indata(struct SinhVien sv)
{
    puts(sv.svcode);
    puts(sv.Name);
    puts(sv.Birth);
    puts(sv.Address);
    puts(sv.Nganh);

}
void ghi_data(struct SinhVien sv1)
{
    FILE *f;
    f = fopen("dulieusinhvien.dat", "w");
    fwrite(&sv1,1, sizeof(struct SinhVien), f);
    fclose(f);


}
void read_data(struct SinhVien &sv)
{
    FILE *f;
    f = fopen("dulieusinhvien.dat", "r");
    fread(&sv,1, sizeof(struct SinhVien), f);
    fclose(f);


}
int main()
{
    struct SinhVien sv1, sv2, temp;
    nhap_data(sv1);
    ghi_data(sv1);
    read_data(temp);
    indata(temp);
}
