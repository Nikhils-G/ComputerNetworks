#include<stdio.h>
int a[10][10],n; main()
{
int i,j,root;
printf("Enter no.of nodes:"); scanf("%d",&n);
printf("Enter adjacent matrix\n"); for(i=1;i<=n;i++) for(j=1;j<=n;j++)
{
printf("Enter connecting of %d>%d::",i,j); scanf("%d",&a[i][j]);
}
printf("Enter root node:"); scanf("%d",&root); adj(root);
}
adj(int k)
{
int i,j;
printf("Adjacent node of root node::\n"); printf("%d\n",k);
for(j=1;j<=n;j++)
{
if(a[k][j]==1 || a[j][k]==1) printf("%d\t",j);
}
printf("\n"); for(i=1;i<=n;i++)
{
if((a[k][j]==0) && (a[i][k]==0) && (i!=k)) printf("%d",i);
}
}
