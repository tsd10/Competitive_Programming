/*
This is a codeforces problem. 
Link to the problem: https://codeforces.com/contest/231/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    int no_of_pblms, final_count = 0, soln_count = 0, soln_view;

    cin >> no_of_pblms;

    for (int i = 0; i < no_of_pblms; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> soln_view;
            soln_count += soln_view;
        }

        if (soln_count >= 2)
            final_count += 1;

        soln_count = 0;
    }

    cout << endl
         << final_count << endl;

    return 0;
}