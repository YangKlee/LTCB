#include<stdio.h>
#include<math.h>
void nhapmang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
void inmang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
}
float sum_nguyen(float a[], int n)
{
    float sum = 0;
    float dem = 0;
    for (int i = 0; i < n; i++)
    {
        if((int)a[i] == a[i])
        {
            dem++;
            sum+= a[i];
        }
    }
    if(sum == 0)
    {
        return 0;
    }
    return sum/dem;
}
void find(float a[], int n, float x)
{
    float ngannhat = abs(x- a[0]);
    float value = 0;

    for (int i = 1; i < n; ++i)
    {
        float khoangcach = abs(x - a[i]);
        if(khoangcach <= ngannhat)
        {
            ngannhat = khoangcach;
            value = a[i];
        }
    }
    printf("So gan nhat voi so X la: %.2f", value);
    printf(" va o cac vi tri:  ");
    for (int i = 0; i < n; ++i)
    {
        if(a[i] ==  value)
        {
            printf("%d ", i+1);
        }
    }
}
void writefile(float a[], int n)
{
    FILE *f;
    f = fopen("dulieu.txt", "w");
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%f ", a[i]);
    }
    fclose(f);
}
float sum_readfile()
{
    FILE *f;
    f = fopen("dulieu.txt", "r");
    int n;
    float sum = 0;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; ++i)
    {
        float temp;
        fscanf(f, "%f", &temp);
        sum += temp;

    }
    fclose(f);
    return sum;
}
int main()
{
    int n;
    float x;
    printf("Nhap so luong so thuc trong mang: ");
    scanf("%d", &n);
    float a[n];
    nhapmang(a,n);
    printf("Mang vua nhap la: ");
    inmang(a,n);
    printf("\nTong trung binh cong so nguyen la: %.2f\n", sum_nguyen(a,n));
    printf("Nhap x: ");
    scanf("%f", &x);
    find(a,n,x);
    writefile(a,n);
    printf("\nTong cac so da doc la: %.2f", sum_readfile());
}