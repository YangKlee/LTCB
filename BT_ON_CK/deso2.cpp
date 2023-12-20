#include<stdio.h>
void input_array(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("A[%d]= ", i);
        scanf("%d", &a[i]);

    }
}
void swap(int &a , int &b)
{
    int tg = a;
    a = b;
    b = tg;
}

void perfect_number(int a[], int n)
{
    int dem = 0;
    printf("\nCac so hoan hao trong mang la: ");
    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 1; j < a[i]; ++j)
        {
            if(a[i]%j == 0)
            {
                sum += j;
            }
        }
        if(sum == a[i])
        {
            dem++;
            printf("%d ", a[i]);
        }
    }
    printf("\nTong cong co %d so hoan hao", dem);
}
void xap_xep(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void write_file(int a[], int n)
{
    xap_xep(a,n);
    FILE *f;
    f = fopen("numbers.txt", "w");
    for (int i = 0; i < n; ++i)
    {
        fprintf(f, "%d\t", a[i]);
    }
    fclose(f);
}
bool fibonachii(int f1, int f2, int a)
{
    int sum = 0;
    if(f1+f2 > a)
    {
        return 0;
    }
    else if(f1+f2 == a)
    {
        return 1;
    }
    else
    {
        return fibonachii(f1+f2, f1, a);
    }
}

void read_file()
{
    int dem = 0;
    printf("\nSo thuoc day fibonachii la: ");
    FILE *f;
    f = fopen("numbers.txt", "r");
    int tg= 0;
    do {
        int temp;
        tg = fscanf(f, "%d", &temp);
        if(tg != EOF)
        {
            if(fibonachii(1,1,temp))
            {
                dem++;
                printf("%d ", temp);
            }
        }

    } while (tg != EOF);
    printf("\nTong cong co %d so thuoc day fibonachii", dem);
    fclose(f);
}
bool check_csc(int a[], int n)
{
    int d = a[1] - a[0];
    for (int i = 0; i < n-1; ++i)
    {
        if(a[i+1] - a[i] != d)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &n);
    int a[n];
    input_array(a,n);
    perfect_number(a,n);
    if(check_csc(a, n))
        printf("\nDay so la mot cap so cong!");
    else
        printf("\nDay so khong phai la mot cap so cong!");
    write_file(a,n);
    read_file();

}