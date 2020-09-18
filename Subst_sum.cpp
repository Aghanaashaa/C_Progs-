#include<iostream>
using namespace std;
 
bool subset_sum(int a[],int n, int sum)
{
    bool x[n+1][sum+1];
 
    int i,j;
    for(i=0;i<=n;i++)
        x[i][0]=true;
    for(j=1;j<=sum;j++)
        x[0][j]=false;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(x[i-1][j]==true)
                x[i][j]=true;
            else
            {
                if(a[i-1]>j)
                    x[i][j]=false;
                else
                    x[i][j]=x[i-1][j-a[i-1]];
            }
        }
    }
    return x[n][sum];
}
 
int main()
{
    int i;
    int n;
    int sum;
 
    cout<<"The sum is: "<<endl;
    cin>>sum;
 
    cout<<"Enter elements in the set"<<endl;
    cin>>n;
    int a[n];
 
    cout<<"Enter the values"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
 
    bool result=subset_sum(a,n,sum);
 
    if(result==true)
        cout<<"Subset with the given sum is found";
 
    else
        cout<<"No Subset found";
 
    cout<<endl; 
    return 0;
}
