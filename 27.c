#include<stdio.h>
int a[100][100], i,j, hang, cot,n, t,d;
void main()
{
n=5;
d = 1;
t=1;
for (i=d;i<=n;i++) a[1][i] = t++;
for (i=d;i<=n;i++) a[2][i]=t++;
for (i =d;i<=n;i++) a[3][i]=t++;
for (i=d;i<=n;i++) a[4][i] = t++;
for (i=d;i<=n;i++) a[5][i] = t++;

for (i=1;i<=5;i++){
    for(j=1;j<=5;j++){
    printf("%5d", a[i][j]);}
printf("\n\n\n");}

}

