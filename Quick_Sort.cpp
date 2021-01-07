///Time Complexity: O(n^2) for the worst case
///Time Complexity: O(n(log(n))) for the best case
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

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swapp(A, i, j);
        }

    } while (i < j);
    swapp(A, low, j);
    return j;
}

void QuickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, high);
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
    QuickSort(Arr, 0, size - 1);
    cout << "After Sorting:" << endl;
    printArray(Arr, size);

    return 0;
}