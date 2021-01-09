/*

This is a codeforces problem.
Link to this problem: https://codeforces.com/problemset/problem/71/A
*/

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    string output_abbreviation;
    int no_of_words;

    cin >> no_of_words;

    string input_word[no_of_words];
    for (int j = 0; j < no_of_words; j++)
        cin >> input_word[j];

    for (int i = 0; i < no_of_words; i++)
    {
        if (input_word[i].length() > 10)
        {
            output_abbreviation = input_word[i][0];
            output_abbreviation += std::to_string((input_word[i].length() - 2));
            output_abbreviation += input_word[i][input_word[i].length() - 1];
            cout << output_abbreviation << endl;
            output_abbreviation.clear();
        }

        else
            cout << input_word[i] << endl;
    }

    return 0;
}