#include<stdio.h>
void input_array(int  a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void export_array(int  a[], int n)
{
    printf("Mang vua nhap la: \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
int dem_so_le_vt_le(int a[], int n)
{
    int cout = 0;
    for(int i = 0; i<n; i++)
    {
        if(i%2  != 0 && a[i]%2 != 0)
        {
            cout++;
        }
    }
    return cout;
}
void xd_so_le_vt_le(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(i%2  != 0 && a[i]%2 != 0)
        {
            printf("\nSo %d o vi tri %d", a[i], i);
        }
    }
}
int main()
{
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int a[n];
    input_array(a,n);
    export_array(a,n);
    printf("\nMang co %d so le o vi tri le cu the la: \n", dem_so_le_vt_le(a,n));
    xd_so_le_vt_le(a,n);


}