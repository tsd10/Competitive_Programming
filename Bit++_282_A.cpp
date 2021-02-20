/*
This is a codeforces problem. 
Link to the problem: https://codeforces.com/problemset/problem/282/A
*/
#include<iostream>
using namespace std;

int main()
{
    int N,count=0;
    string statement;

    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>statement;
        if(statement=="++X" || statement=="X++")
        count++;

        else if(statement=="--X" || statement=="X--")
        count--;
    }

    cout<<count;

    return 0;

}