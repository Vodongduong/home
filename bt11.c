#include<stdio.h>
void main()
{
    int a[100],i,max,min;
    int n;
    printf("\nNhap so phan tu cua day n = ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf ("\n nhap gia tri cua a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang ban vua nhap la :");
    for (i=0;i<n;i++)
        printf("%5d\t",a[i]);
        max = a[0];
        min = a[0];
        for (i=0;i<n;i++)
        {
            if (a[i]>max)
                max = a[i];
            if (a[i]<min)
                min = a[i];
        }
        printf("\nMax = %d", max);
        printf("\nMin = %d", min);
}
