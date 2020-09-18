
#include <stdio.h>

int main() {
  int a[50],b[50],i,j,c,n;
  printf("Enter size: ");
  scanf("%d",&n);

  printf("Enter elements: ");
  for(i=0;i<n;i++)
  { 
    scanf("%d",&a[i]);
    b[i]=-1;
  }
  for(i=0;i<n;i++)
  {
    c=1;
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        c++;
        b[j]=0;
      }
    }
    if(b[i]!=0)
    {
      b[i]=c;
    }
  }
  printf("Count of array elements : \n");
  for(i=0;i<n;i++)
  {
    if(b[i]!=0)
    {
      printf("%d found %d times \n",a[i],b[i]);
    }
  }
}
