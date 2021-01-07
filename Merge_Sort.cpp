
/*
Auther : Abdullah Al Masum
//Merge sort isn't tested here & doesn't fully work i guess
*/

#include <bits/stdc++.h>
using namespace std;
#define MAXX 10000000
int Arr[MAXX];

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void swapp(int *A, int i, int j)
{
    int temp = A[j];
    A[j] = A[i];
    A[i] = temp;
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[MAXX];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
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
    mergeSort(Arr, 0, size - 1);
    cout << "After Sorting:" << endl;
    printArray(Arr, size);

    return 0;
}