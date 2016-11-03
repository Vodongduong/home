#include<stdio.h>
void main()
{
    int a[100], i, n;
    printf("\nNhap n =");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nnhap %d = ", i);
        scanf("%d", &a[i]);
    }
    a[0]=1;
    a[1]=1;
    for (i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];}
        for (i=0;i<n;i++) printf("%d\t", a[i]);
}
