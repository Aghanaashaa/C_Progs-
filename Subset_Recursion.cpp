 
#include <stdio.h> 
bool SubsetSum(int a[], int n, int sum) 
{ 
    if (sum == 0) 
        return true; 
    if (n == 0) 
        return false; 
    if (a[n - 1] > sum) 
        return SubsetSum(a, n - 1, sum); 
  
    return SubsetSum(a, n - 1, sum) 
           || SubsetSum(a, n - 1, sum - a[n - 1]); 
} 
int main() 
{ 
    int a[] = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 9; 
    int n = sizeof(a) / sizeof(a[0]); 
    if (SubsetSum(a, n, sum) == true) 
        printf("Found a subset with the given Sum"); 
    else
        printf("No subset with given sum"); 
    return 0; 
} 
