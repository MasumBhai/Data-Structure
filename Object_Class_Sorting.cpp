#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
    int start, finish;

    Time()
    {
    }
    Time(int s, int f)
    {
        start = s;
        finish = f;
    }
    void print()
    {
        cout << "start :" << start << " || finish :" << finish << endl;
    }
};

bool operator<(const Time &t1, const Time &t2) //now we will do operator overloading
{
    if (t1.finish < t2.finish)
    {
        return true;
    }
    if (t1.finish > t2.finish)
    {
        return false;
    }
    if (t1.start > t2.start)
    {
        return true;
    }
    return false;
}
int main()
{
    //freopen("Time.txt","r",stdin);
    int n;
    cin >> n;
    Time time[n]; //This time[] is array of our Time class

    int s, f;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> f;
        Time t(s, f);
        time[i] = t;
        time[i].print();
    }
    cout << endl;
    sort(time, time + n);

    for (int i = 0; i < n; i++)
    {
        time[i].print();
    }
}
/*
input
7
1 2
8 9
7 2
5 4
6 2
5 10
2 3
*/
