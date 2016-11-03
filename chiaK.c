#include<stdio.h>
int a[100], i, n, k;
void nhap()
{
    printf("\nNhap so phan tu cua day so n = ");
    scanf ("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cho a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuat()
{
    for (i=0;i<n;i++)
        printf("%5d\t", a[i]);
}
void chia()
{
    printf("\nNhap so chia k = ");
    scanf("%d", &k);
    for (i=0;i<n;i++)
    {
        if (a[i]%k == 0)
            printf("%5d", a[i]);
    }
}
void main ()
{
nhap();
xuat();
printf("\nKet qua \n");
chia();
}
