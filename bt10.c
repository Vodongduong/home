#include<stdio.h>
void nhap(int a[100], int n)

{
int i;
    printf("\nNhap so phan tu:");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("\nNhap %d = ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[100], int n)
{   int i;
    for (i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
}
void sapxep()
{int a[100], b[100], c[200];
int i,j,l,m,n,k;
    l = m+n;
    for (k=0;k<l;k++){
        if ( i<n && j<m)
    {
        if (a[i]<=b[j])
        {
            c[k]= a[i];
            i++;
        }
        if (b[j]<a[i])
            {
               c[k] = b[j];
                j++;
            }
    }
    else if (i<n)
    {
        a[k] = a[i];
        i++;
    }
    else if (j<m)
    {
        a[k] = b[j];
        j++;
    }

}}
void main ()
{
    int a[100], b[100], c[200];
    int n,m,l;
    printf("\nNhap a");
    nhap(a,n);
    printf("\nMang a la ");
    xuat(a,n);
    printf("\nNhap b");
    nhap(b,m);
    printf("\nMang b la ");
    xuat(b,m);
    printf("\nKq");
    sapxep();
    xuat(c,l);
}
