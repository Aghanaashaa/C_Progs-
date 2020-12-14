#include<bits/stdc++.h>  
using namespace std; 
  
int max(int a, int b);  
int lcs( char *A, char *B, int p, int q )  
{  
    int L[p + 1][q + 1];  
    int i, j;  
 
    for (i = 0; i <= p; i++)  
    {  
        for (j = 0; j <= q; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (A[i - 1] == B[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[p][q];  
}  
 
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}  
  
int main()  
{  
    char X[] = "Mikelson";  
    char Y[] = "Ellijah";  
      
    int m = strlen(X);  
    int n = strlen(Y);  
      
    cout << "Length of LCS is " 
         << lcs( X, Y, m, n );  
      
    return 0;  
}  
