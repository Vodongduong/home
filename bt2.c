#include<stdio.h>
void main ()
{
    int a[100], i, n;
    printf("\nNhap n = ");
    scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
        printf ("\nNhap %d = ", i);
        scanf ("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
            max = a[i];
        if (a[i]<min)
            min = a[i];
    }
    printf ("\nmax = %d", max);
    printf ("\nmin = %d", min);
}
