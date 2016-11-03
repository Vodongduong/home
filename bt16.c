#include<stdio.h>
int i,n,k,j,tam;
float a[100];
void nhap()
{
    printf("\nNhap so phan tu cua mang n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu %d", i);
        scanf("%f", &a[i]);
    }
}
void xuat()
{
    for(i=0;i<n;i++)
        printf("%0.1f\t", a[i]);
}
void xuat1()
{
    for (i=0;i<k;i++)
        printf("%0.1f\t", a[i]);
}
void xoa()
{
    for (i=0;i<n;i++)
    {
        if (a[i]>0)
        {
            a[k] = a[i];
            k++;
        }
    }

}
void xep()
{
    for (i=0;i<k;i++)
        for (j=i+1;j<k;j++)
    {
        if(a[i]>a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
void main()
{
   nhap();
   xuat();
   xoa();
   printf("\nDay sau khi xoa\n");
   xuat1();
   xep();
   printf("\nKQ\n");
   xuat1();

}
