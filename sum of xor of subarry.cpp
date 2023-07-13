#include <bits/stdc++.h>
using namespace std;

void subArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
    
        for (int j = i; j < n; j++)
        {
            int xo = 0; 
            for (int k = i; k <= j; k++)
            {
                xo ^= arr[k];
            }
            sum += xo;
        }
    }
    cout << sum << endl;
}
int main()
{
    int arr[] = {1, 2, 3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
    return 0;
}
