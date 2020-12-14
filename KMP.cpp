#include <iostream>
using namespace std;

void KMP(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    if (n == 0)
    {
cout<< "No pattern to validate";
        return;
    }

    if (m < n)
    {
        cout<< "Pattern not found";
        return;
    }

    int next[n + 1];

    for (int i = 0; i< n + 1; i++)
        next[i] = 0;

    for (int i = 1; i< n; i++)
    {
        int j = next[i + 1];

        while (j > 0 && Y[j] != Y[i])
            j = next[j];

        if (j > 0 || Y[j] == Y[i])
        next[i + 1] = j + 1;
    }

    for (int i = 0, j = 0; i< m; i++)
    {
        if (X[i] == Y[j])
        {
            if (++j == n)
            cout<< "Pattern occurs after " <<i - j + 1 <<endl;
        }
        else if (j > 0) {
            j = next[j];
            i--;    
        }
    }
}

int main()
{
    string text = "PQRSPQRSRQPRQQRPPQRS";
    string pattern = "PQRS";

KMP(text, pattern);

    return 0;
}

