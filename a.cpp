#include<iostream>
#include "stdc++.h"
using namespace std;

#define ll long long

int main()
{
    string s;
	cin>>s;
	char l='A',b;
	int ans=1,c=0;
	for(char d : s){
		if(d==l){
			++c;
			ans=max(c,ans);
		}
		else{
			l=d;
			c=1;
		}
	}

	cout<<ans;

}