///Time Complexity: O(n^2) for the worst case
//Time Complexity: O(n) for the best case
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

void swapp(int *A, int i, int j)
{
    int temp = A[j];
    A[j] = A[i];
    A[i] = temp;
}
void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }
        swapp(A, minIndex, i);
        cout << "Working on pass number " << i + 1 << " : ";
        printArray(A, n);
    }
}

int main()
{
    //takeInput();
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cout << "Before Sorting: " << endl;
    printArray(Arr, size);
    SelectionSort(Arr, size);
    cout << "After Sorting:" << endl;
    printArray(Arr, size);

    return 0;
}