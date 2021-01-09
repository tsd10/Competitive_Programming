/*
This is a codeforces problem. 
Link to the problem: https://codeforces.com/problemset/problem/4/A
*/

#include <iostream>
using namespace std;

int main()
{
    int weight;

    cin >> weight;

    if (weight % 2 == 0)
    {
        if (weight <= 2)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }

    else
        cout << "NO" << endl;

    return 0;
}