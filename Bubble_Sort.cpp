///Time Complexity: O(n^2) for the average case
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
void BubbleSort(int Arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int adaptive = 1;
        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swapp(Arr, j, j + 1);
                adaptive = 0;
            }
        }
        if (adaptive)
        {
            return;
        }
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
    BubbleSort(Arr, size);
    cout << "After Sorting:" << endl;
    printArray(Arr, size);

    return 0;
}