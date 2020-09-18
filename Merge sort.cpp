#include <stdio.h>
void Merge(int A[],int l,int mid,int h)//l is lower bound and h is higher bound 
{
int i=l,j=mid+1,k=l;
int B[100];
while(i<=mid && j<=h)
{
if(A[i]<A[j])         
B[k++]=A[i++];
else
B[k++]=A[j++];
}
for(i=0;i<=mid;i++)
B[k++]=A[i];
for(j=0;j<=h;j++)
B[k++]=A[j];
for(i=l;i<=h;i++)
A[i]=B[i];
}
void IMergeSort(int A[],int n)
{
int r,l,h,mid,i;
for(r=2;r<=n;r=r*2)
{

for(i=0;i+r-1<=n;i=i+r)
{
l=i;
h=i+r-1;
mid=(l+h)/2;
Merge(A,l,mid,h);
}
}
if(r/2<n)
Merge(A,0,r/2-1,n);
}

int main()
{
int A[]={17,13,8,21,16,3,2,0,10,30},n=10,i;
IMergeSort(A,n);
for(i=0;i<10;i++)
printf("%d ",A[i]);
printf("\n");
return 0;
}
