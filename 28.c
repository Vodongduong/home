#include<stdio.h>
int a[100][100], i,j, hang, cot,n, t,d;
void main()
{
n=5;
d =1;
t=1;
for (i=d;i<=n;i++) a[i][1] = t++;
for (i=d;i<=n;i++) a[i][2]=t++;
for (i =d;i<=n;i++) a[i][3]=t++;
for (i=d;i<=n;i++) a[i][4] = t++;
for (i=d;i<=n;i++) a[i][5] = t++;

for (i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    printf("%5d", a[i][j]);}
printf("\n\n\n");}

}


