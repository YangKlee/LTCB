#include<stdio.h>
#include<stdlib.h>
void input_point(float a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Nhap diem sinh vien %d", i+1);
        scanf("%f", &a[i]);
    }
}
int dem_sv_5d(float a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] >=5)
        {
            dem++;
        }
    }
    return dem;
}

int get_point_min(float a[], int n)
{
    float min = a[0];
    for (int i = 1; i < n; ++i)
    {
        if(a[i] <= min)
        {
            min = a[i];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] == min)
        {
            dem++;
        }
    }
    return dem;
}

void write_file(float a[], int n)
{
    FILE *f;
    f = fopen("diemthi.txt", "w");
    if(f==NULL)
    {
        printf("Loi file hong ghi duoc");
        exit(0);
    }
    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%f\n", a[i]);
    }
    fclose(f);
}
float read_and_avg()
{
    FILE *f;
    f = fopen("diemthi.txt", "r");
    if(f == NULL)
    {
        printf("Loi file hong doc duoc");
        exit(0);
    }
    int tg = 0;
    float sum = 0, temp;
    int dem = 0;
    do
    {
        tg = fscanf(f, "%f", &temp);
        //printf("\nDEBUG: %f", temp);
        if(tg != EOF)
        {

            sum += temp;
            dem++;
        }
    }
    while(tg != EOF);
    fclose(f);
    return sum / (float )dem;
}
int main()
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    float point[n];
    printf("Nhap diem trung binh cac sinh vien:\n ");
    input_point(point, n);
    printf("\nCo %d sinh vien co diem thi >= 5", dem_sv_5d(point, n));
    printf("\nSo sinh vien co diem thi nho nhat %d", get_point_min(point,n));
    write_file(point, n);
    printf("\nDiem trung binh cac sinh vien la: %.3f", read_and_avg());


}