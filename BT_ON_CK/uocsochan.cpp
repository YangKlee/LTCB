#include<stdio.h>
#include<stdlib.h>
void inp_array(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("A[%d] = ", i);
        scanf("%d" ,&a[i]);
    }
}
int sum_chia_het(int a[], int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if(i%2 != 0 && a[i] % x == 0)
        {
            sum+= a[i];
        }
    }
    return sum;
}
int uoc_chan_max(int m)
{
    int temp = 0;
    for (int i = 1; i < m; ++i)
    {
        if(m % i == 0)
        {
            temp = i;
        }
    }
    return temp;
}
int sum_uoc_chan(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += uoc_chan_max(a[i]);

    }
    return sum;
}
int max_soam(int a[], int n)
{
    int max = NULL;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] < 0)
        {
            max = a[i];
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i] < 0 && i%2 == 0 && a[i] > max)
        {
            max = a[i];
        }
    }
    if(max != NULL)
    {
        return max;
    }
    return 0;
}
void write_file(int a[], int n)
{
    FILE *f;
    f = fopen("soNguyen.txt", "w");
    fprintf(f, "%d", &n);
    for (int i = 0; i < n; ++i)
    {
        fprintf(f,"%d", &a[i]);
    }
    fclose(f);
}
int main()
{
    int n,x;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    inp_array(a,n);
    printf("\nNhap x: ");
    scanf("%d", &x);
    printf("\nTong so chia het cho %d o vi tri le la %d", x, sum_chia_het(a,n,x));
    //printf("\nUoc chan max la: %d", uoc_chan_max(100));
    printf("\nSo am lon nhat o vi tri chan la: %d", max_soam(a,n));
    printf("\n Tong uoc chan lon nhat cua cac ptu trong mang la: %d", sum_uoc_chan(a,n));


}
