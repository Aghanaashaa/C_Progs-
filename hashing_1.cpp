#include<iostream>
using namespace std;
void repeating_element(int arr[], int n)
{
int i, j;
int count = 0;
printf("Repeating elements are: ");
for(i = 0;i<n;i++)
{
for(j = i+1;j<n;j++)
{
if(arr[i] == arr[j])
{
cout << arr[j] << " ";
}
}
}
}
int main()
{
int n;
cout<<"Enter the size";
cin >> n;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
cout<<"Repeating element";
repeating_element(arr,n);
return 0;
}