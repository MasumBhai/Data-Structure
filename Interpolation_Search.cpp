///Time Complexity: O(log2(log2 n)) for the average case
/*
Auther : Abdullah Al Masum
*/
#include <bits/stdc++.h>
#include <stdio.h>
#define maximum 100

using namespace std;

int interpolationSearch(int A[], int n, int e)
{
    int start, end, pos;
    start = 0;
    end = n - 1;

    while (start <= end && e >= A[start] && e <= A[end])
    {

        pos = start + (((double)(end - start) / (A[end] - A[start])) * (e - A[start]));

        if (A[pos] == e)
            return pos;
        if (e > A[pos])
            start = pos + 1;
        else
            end = pos - 1;
    }
    return -1;
}
int main()
{
    int len, search_element;
    cout << "input the length : ";
    cin >> len;
    int A[len];
    cout << "input the values : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> A[i];
    }
    cout << "input the search element : " << endl;
    cin >> search_element;

    int index = interpolationSearch(A, len, search_element);
    if (index != -1)
    {
        cout << "search position : " << index;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}
