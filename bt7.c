#include<stdio.h>
void main ()
{
int a[100][100], i, j, d, n;
printf ("\nnhap cap cua ma tran vuong cap n = ");
scanf("%d", &n);
for (i=0;i<n;i++){
for (j=0;j<n;j++){
printf ("\nNhap gia tri cua a[%d][%d]", i,j);
scanf ("%d", &a[i][j]);
}}
for (i=0;i<n;i++)
    for (j=0;j<n;j++)
{
if (n==1)
{
 d = a[0][0];
}
if (n==2)
{
   d = a[0][0]*a[1][1]-a[1][0]*a[0][1];
}
}
printf ("dinh thuc la %d", d);
}
