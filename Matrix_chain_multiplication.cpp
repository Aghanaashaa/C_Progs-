#include <iostream>
using namespace std;
int MCM(int arr[], int i, int j)
{
    if (j <= i + 1)
        return 0;
    int min = INT_MAX;

    for (int k = i + 1; k <= j - 1; k++)
    {
        int cost = MCM(arr, i, k);
        cost += MCM(arr, k, j);
        cost += arr[i] * arr[k] * arr[j];

        if (cost < min)
            min = cost;
    }
    return min;
}
int main()
{
    int arr1[] = {60, 20, 6, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Minimum cost is " << MCM(arr1, 0, n - 1);

    return 0;
}

