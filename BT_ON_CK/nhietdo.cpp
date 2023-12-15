#include<stdio.h>
void input_temperature(float a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Nhap nhiet do ngay %d", i+1);
        scanf("%f", &a[i]);
    }
}
float avg_temperature(float a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    return sum/(float)n;
}
int max_temperature(float a[], int n)
{
    float max = 0;
    int vitri;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] > max)
        {
            max = a[i];
            vitri = i;
        }
    }
    return vitri+1;
}
int temp_next_days(float a[], int n, int k)
{
    // kiem tra ngoai le: truong hop k lon hon so ngay
    if(k > n)
    {
        return -1;
    }

    int dem = 0;
    for (int i = k-1 ; i < n-1; i++)
    {
        if(a[i+1] > a[i])
        {
            dem++;
        }
    }
    return dem;
}
void save_file(float a[], int n)
{
    FILE *f;
    f = fopen("nhietdo.txt", "w");
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%f ", a[i]);

    }
    fclose(f);
}
int main()
{
    int days;
    printf("Nhap so ngay: ");
    scanf("%d", &days);
    float temperature[days];
    input_temperature(temperature,days);
    printf("\nNhiet do trung binh cua %d ngay la %.2f", days, avg_temperature(temperature, days));
    printf("\nNgay %d la ngay co nhiet do cao nhat!", max_temperature(temperature, days));
    int days_k;
    printf("\nNhap ngay: ");
    scanf("%d", &days_k);
    if(temp_next_days(temperature, days, days_k) != -1)
    {
        printf("\nTu ngay thu %d co %d ngay co nhiet do ngay sau cao hon ngay truoc!", days_k, temp_next_days(temperature, days, days_k));
    }
    else
    {
        printf("\nKhong the xac dinh ngay co nhiet do cao hon ngay truoc vi ngay ban nhap lon hon so ngay hien co!");
    }
    save_file(temperature, days);
    // Source by: Nguyen Khanh Duong(4651050044) - YangKlee - Yang
    // Create day 15/12/2023
    // Report bug: khanhduong18072005@gmail.com

}
