#include "stdio.h"
#include "stdlib.h"
void input_array(float a[], int n)
{
    for (int i = 0; i < n; ++i) {
        printf("A[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
float sum_h_to_k(float a[], int n, int h, int k)
{
    float sum =0;
    for (int i = h; i <= k; ++i) {
        sum+=a[i];
    }
    return sum;
}
float find_so_am_max(float a[], int n)
{
    float max = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i] < 0 && i%2 == 0)
        {
            max = a[i];
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        if(a[i] < 0 && i%2 == 0 && a[i] > max)
            max = a[i];
    }
    printf("\nVi tri cac so bang so am lon nhat la: ");
    for (int i = 0; i < n; ++i) {
        if(i%2 == 0  && a[i] == max)
            printf("%d ", i);
    }
    return max;
}
void write_file(float a[], int n)
{
    FILE *f;
    f = fopen("soThuc.txt", "w");
    if(f == NULL)
    {
        printf("\nWrite file ERROR!");
        exit(0);
    }
    fprintf(f,"%d\n", n);
    for (int i = 0; i < n; ++i) {
        fprintf(f,"%.3f ", a[i]);
    }
    fclose(f);
}
float read_file_and_avg()
{
    int n;
    float sum = 0;
    FILE *f;
    f = fopen("soThuc.txt", "r");
    if(f == NULL)
    {
        printf("\nRead file ERROR!");
        exit(0);
    }
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; ++i) {
        float temp;
        fscanf(f, "%f", &temp);
        sum += temp;
    }
    return sum/(float )n;

}
int main()
{
    int n, h, k;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    float *a=(float *) malloc(n*sizeof(float ));
    input_array(a,n);
    do {
        printf("Nhap h: ");
        scanf("%d", &h);
        printf("Nhap k: ");
        scanf("%d", &k);
    }
    while(h<0 || k < h || k >= n); // xu li ngoai le theo yeu cau de bai
    printf("\nTong cac so tu h den k: %.3f", sum_h_to_k(a,n,h,k));
    printf("\nSo am lon nhat o vi tri chan trong mang la:  %.2f", find_so_am_max(a,n));
    write_file(a,n);
    printf("\nTrung binh cong cac so trong day la: %.3f", read_file_and_avg());
    // Code by: @YangKlee
}