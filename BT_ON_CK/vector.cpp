#include "stdio.h"
#include "stdlib.h"
#include "math.h"
void input_vector(float a[], int n, char type)
{
    for (int i = 0; i < n; ++i) {
        printf("%C[%d]= ", type,i);
        scanf("%f", &a[i]);
    }
}
float calc_module(float a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum+=pow(a[i], 2); //aka a[i]^2 or a[i] * a[i]
        
    }
    return sqrt(sum);
}
bool check_cungphuong(float a[], float b[], int n)
{
    float privot = b[0]/a[0];
    for (int i = 1; i < n; ++i) {
        if(b[i]/a[i] != privot)
            return 0;
    }
    return 1;
}
void save_vector(float a[], int n)
{
    FILE *f;
    f = fopen("vector.txt", "w");
    if(f == NULL)
    {
        printf("\nWrite file ERROR!");
        exit(0);
    }
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; ++i) {
        fprintf(f, "%.3f ", a[i]);
    }
}
int main()
{
    int n;
    printf("Nhap so chieu cua vector: ");
    scanf("%d", &n);
    // cap phat bo nho dong, co the dung float a[n] cung dc
    float *a = (float*)malloc(n*sizeof(float ));
    printf("\nNhap do dai vector A: \n");
    input_vector(a,n, 'A');
    float *b = (float*)malloc(n*sizeof(float ));
    printf("\nNhap do dai vector B: \n");
    input_vector(b,n, 'B');
    printf("\nDo dai cua vector A la: %f", calc_module(a,n));
    if(check_cungphuong(a,b,n))
        printf("\nHai vector A va B cung phuong!");
    else
        printf("\nHai vector A va B khong cung phuong!");
    save_vector(a,n);
}