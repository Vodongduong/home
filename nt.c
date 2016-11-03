#include<stdio.h>
void main ()
{
    int a[100];
    int i,n,j;
    int dem =0;
    int t=0;

    printf("\nNhap so phan tu n = ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        printf("\nNhap gia tri cho phan tu thu %d = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nDay so ban vua nhap la ");;
    for(i=1;i<=n;i++)
        printf("%d\t", a[i]);
    for (i=1;i<=n;i++){
            dem =0;
            for (j=1;j<=a[i];j++)
           {
               if (a[i]%j==0)
                  dem ++;
            }
            if (dem ==2)
                t++;

       }
    printf("\nSo phan tu la nguyen to là co %d phan tu", t);



}
