#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int freq[26]={0};
	
	for (int i=0;i<s.size();i++)
	{
		freq[s[i]-'a']++;
	}
	
	for (int i=0;i<26;i++)
		cout << freq[i] << " ";
}
