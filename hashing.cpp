#include <iostream>
using namespace std;
int main() {
  int x,n;
  cin>>n;
  int hash[101]={0};//duplicate array
  for(int i=0;i<n;i++)
  {
    cin>>x;
    hash[x]++;
  }
  for(int i=0;i<101;i++)
  {
    if(hash[i]!=0)
    {
      cout<<i<<"-->"<<hash[i];
      cout<<endl;
    }
  }
  return 0;
 
}
