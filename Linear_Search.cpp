///Time Complexity: O(n) for the average case
/*
Auther : Abdullah Al Masum
*/

#include <bits/stdc++.h>
using namespace std;
#define MAXX 10000000
int Arr[MAXX];

// void takeInput()
// {
//     int size;
//     global findValue;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> Arr[i];
//     }
//     cin >> findValue;
// }

void printArray(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void linearSearch(int Arr[], int N, int find)
{
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] == find)
        {
            cout << "Value found at: " << i << "th index" << endl;
        }
    }
}

int main()
{
    //takeInput();
    int size, findValue;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cin >> findValue;

    linearSearch(Arr, size, findValue);
    cout << "Here array is started from 0 index" << endl;
    printArray(Arr, size);

    return 0;
}
// Input for Linear linearSearch
// 5
// 5 4 6 9 1
// 9
