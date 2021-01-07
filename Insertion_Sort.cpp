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
void InsertionSort(int A[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        cout << "after " << i << " pass: ";
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
    InsertionSort(Arr, size);
    cout << "After Sorting:" << endl;
    printArray(Arr, size);

    return 0;
}