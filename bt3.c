#include<stdio.h>
void main ()
{ int a[100], i, j, n;
    printf ("\nNhap n = ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf ("\nNhap %d = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for (i=0;i<n;i++) printf("%5d", a[i]);
}
