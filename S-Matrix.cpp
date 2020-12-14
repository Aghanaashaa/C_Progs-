#include<stdio.h>
int main(){
int a[2][2],b[2][2],c[2][2],i,j;
int x1,x2,x3,x4,x5,x6,x7;

printf("Enter the elements of first matrix: ");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);

printf("Enter the elements of second matrix: ");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);

printf("\nThe first matrix is\n");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",a[i][j]);
}

printf("\nThe second matrix is\n");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",b[i][j]);
}

x1= (a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
x2= (a[1][0]+a[1][1])*b[0][0];
x3= a[0][0]*(b[0][1]-b[1][1]);
x4= a[1][1]*(b[1][0]-b[0][0]);
x5= (a[0][0]+a[0][1])*b[1][1];
x6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
x7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);

c[0][0]=x1+x4-x5+x7;
c[0][1]=x3+x5;
c[1][0]=x2+x4;
c[1][1]=x1-x2+x3+x6;

printf("\n After multiplication using  \n");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",c[i][j]);
}
return 0;
}
