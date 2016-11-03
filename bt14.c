#include<stdio.h>
int a[100], b[100], c[200];
int i, n, m, h;
void nhapA()
{
    printf("\nNhap so phan tu cua A ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua %d = ", i);
        scanf("%d", &a[i]);
    }
}
void nhapB()
{
    printf("\nNhap so phan tu cua A ");
    scanf("%d", &m);
    for (i=0;i<m;i++)
    {
        printf("\nNhap gia tri cua %d = ", i);
        scanf("%d", &b[i]);
    }
}
void ghep()
{
    h = m+n;
    for (i=0;i<h;i++)
    {
        if (i<n)
            c[i] = a[i];
        else
            c[i] = b[i-n];
    }
}
void main()
{
    nhapA();
    nhapB();
    ghep();
    for (i=0;i<h;i++)
        printf("%5d", c[i]);
}
