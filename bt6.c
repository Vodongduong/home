#include<stdio.h>
void main ()
{
    int a[100], i, chan ,n , le ;
    printf("\nnhap n = ");
    scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
        printf ("\nNhap %d = ", i);
        scanf ("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
            printf("\nSo chan la %d", a[i]);
        if (a[i]%2!=0)
            printf("\nSo le la %d", a[i]);
    }
}
