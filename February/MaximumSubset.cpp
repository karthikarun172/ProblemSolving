#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {3, 7, 2, 9, 1};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        for (int j = i; j < n; j++)
        {
            cout << arr[j] << endl;
        }
    }
}