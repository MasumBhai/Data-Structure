///Time complexity: O(√n)
/*
Auther : Abdullah Al Masum
*/

#include <bits/stdc++.h>
#include <math.h>
#define MAXX 50
using namespace std;

int Array[MAXX];
int length;
int Jump_Search_Algo(int Temp[], int key)
{
    int left = 0;
    int right = floor(sqrt(length));
    while (right < length && Temp[right] <= key)
    {
        left = right;
        right += floor(sqrt(length));

        if (right > length - 1)
        {
            right = length;
        }
    }
    for (int i = left; i < right; i++)
    {
        if (Temp[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    cout << "Input the Length :" << endl;
    cin >> length;
    cout << "Insert values :" << endl;
    int x;
    for (int i = 0; i < length; i++)
    {
        cin >> x;
        Array[i] = x;
    }
    cout << "Find Value : ";
    int Find, Position;
    cin >> Find;
    Position = Jump_Search_Algo(Array, Find);
    if (Position == -1)
    {
        cout << endl
             << "Value not found." << endl;
    }
    else
    {
        cout << endl
             << "Value Found at : " << Position << " th position." << endl;
    }

    return 0;
}
/*
16
0 1 2 3 4 5 8 13 21 34 55 89 144 233 377 541
0
*/
/*
///But my algo has a liability,it can not find values when length is shorter
3
6 8 4
4
*/
