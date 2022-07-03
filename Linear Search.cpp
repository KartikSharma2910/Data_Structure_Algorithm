#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index -> " << i << endl;
            break;
        }
    }

    return 0;
}