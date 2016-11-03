#include<stdio.h>
void main()
{
    int a[100];
    int k,n,i;
    printf("\nNhap so phan tu cua mang n = ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("\nNhap gia tri cho %d = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
        printf("%5d\t", a[i]);
    printf("\nNhap vi tri muon xoa k = ");
    scanf("%d", &k);
    for (i=k;i<n;i++)
    {
        a[i] = a[i+1];
        n--;
        break;
    }
    for (i=0;i<n;i++)
        printf("%5d\t", a[i]);

}
