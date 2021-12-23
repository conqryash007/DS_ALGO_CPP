// Largest Sum Contiguous Subarray

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int sum = 0;
    int tillMax = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum = sum < 0 ? 0 : sum;
        sum += arr[i];
        tillMax = max(tillMax, sum);
    }
    cout << tillMax;
}