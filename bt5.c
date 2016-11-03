#include<stdio.h>
void main ()
{
    int a[100], i,n;
    int s =0;
    printf("\nNhap n =");
    scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
        printf ("\nNhap %d = ", i);
        scanf ("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("\nTong la %d", s);
}
