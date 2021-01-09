/*
This is a codeforces problem. 
https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
using namespace std;

int main()
{
    int no_of_participants, after_kth_place, kth_place, kth_place_score, count = 0, i = 0;

    cin >> no_of_participants;
    cin >> kth_place;

    cin >> kth_place_score;

    if (kth_place_score > 0)
    {
        count++;
        while (i < kth_place - 1)
        {
            cin >> kth_place_score;
            if (kth_place_score == 0)
            {
                kth_place += no_of_participants;
                break;
            }
            if (kth_place_score >= 1)
                count++;
            i++;
        }

        while (kth_place < no_of_participants)
        {
            cin >> after_kth_place;
            if (after_kth_place < kth_place_score || after_kth_place == 0)
                break;

            else
                count++;
            kth_place++;
        }
        cout << endl;
    }

    cout << count << endl;

    return 0;
}