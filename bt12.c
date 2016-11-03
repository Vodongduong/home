#include<stdio.h>
void main()
{
    int a[100], n, j, i;
    printf("\nNhap so phan tu cua mang n = ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("\nNhap %d = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang ban vua nhap la ");
    for (i=0;i<n;i++)
        printf("%5d\t", a[i]);
    for (i=0;i<n;i++)
    for (j=i+1;j<n;j++)
    {
        if (a[i]>a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nMang duoc sap xep la ");
    for (i=0;i<n;i++)
        printf("%5d\t", a[i]);

}
