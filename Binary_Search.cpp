///Time Complexity: O(log(n)) for the average case
/*
Auther : Abdullah Al Masum
*/

#include <bits/stdc++.h>
using namespace std;
#define MAXX 10000000
int Arr[MAXX];

void printArray(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void BinarySearch(int A[], int size, int findValue)
{
    sort(A, A + size);
    cout << "sorted array: ";
    printArray(A, size);

    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (findValue == A[mid])
        {
            cout << "found value at :" << mid << " index" << endl;
            break;
        }
        else if (findValue > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    //takeInput();
    cout << "Array must be sorted,otherwise my programme will automatically sort your list Then find location" << endl;
    int size, findValue;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cin >> findValue;

    BinarySearch(Arr, size, findValue);
    // cout << "Here array is started from 0 index" << endl;
    // printArray(Arr, size);

    return 0;
}
// Input for Linear BinaryarSearch
// 5
// 2 4 4 5 6
// 4
