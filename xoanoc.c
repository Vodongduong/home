#include<stdio.h>
int a[100][100], i,j, hang, cot,n, t,d;
void main()
{
printf("\nNhap hang cua ma tran can tao n = ");
scanf ("%d", &n);
d = 0;
hang = n-1;
cot = n-1;
t=0;
while (d<=n/2){
for (i=d;i<=cot;i++) a[d][i] = t++;
for (i=d+1;i<=hang;i++) a[i][cot]=t++;
for (i =cot-1;i>=d;i--) a[hang][i]=t++;
for (i=hang-1;i>d;i--) a[i][d] = t++;
d++; hang--; cot--;}
for (i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%5d", a[i][j]);}
printf("\n\n\n");}

}
