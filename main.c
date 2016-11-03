#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main ()
{
    int a[100], n, i,dem, t,j;
    t=0;
    dem= 0;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
       printf("\nNhap gia tri cho phan tu thu %d = ", i);
       scanf("%d", &a[i]);
    }
    printf("\nDay ban vua nhap la ");
    for (i=0;i<n;i++)
        printf("%5d", a[i]);
    for (i=0;i<n;i++){
            if ( a[i]>2){
            for (j=2;j<a[i];j++)
            {
                    if (a[i]%j == 0)
                    printf("\nSo khong phai la so nguyen to khac 1 la  %d", a[i]);
                    dem++;
            }}
            if (dem==0||a[i]==2)
                t++;
    }

printf ("\n tong so nguyen to %d", t);

}
