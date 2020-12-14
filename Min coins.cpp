#include <iostream>
#include <limits.h> 

using namespace std;

double find_min(double a, double b){
    if(a <= b)
        return a;
    else
        return b;
}

int findMinCoins(int coins[], int sum, int size){
    double** arr = new double*[size + 1];
    for(int i = 0; i < size + 1; i++)
        arr[i] = new double[sum + 1];
    
    for(int i = 0; i < size + 1; i++)
        arr[i][0] = 0;

    for(int j = 0; j < sum + 1; j++)
        arr[0][j] = INT_MAX;
    
    for(int i = 1; i < size + 1; i++){
        for(int j = 1; j < sum + 1; j++){
            if(coins[i - 1] > j)  
                arr[i][j] = arr[i - 1][j];
            else  
                arr[i][j] = find_min(1 + arr[i][j - coins[i - 1]], arr[i - 1][j]);
        }
    }
    int answer = arr[size][sum];
    for(int i = 0; i < size + 1; i++)
        delete[] arr[i];
    delete[] arr;
    
    return answer;
}

int main(){
    int coins[] = {6, 12, 8, 9};
    int sum = 69;
    
    // Finding total number of available coins:
    int size = sizeof(coins) / sizeof(coins[0]);
    
    cout << "At least " << findMinCoins(coins, sum, size) <<
    " coins are required to make a value of " << sum << endl;
    
    return 0;
}
