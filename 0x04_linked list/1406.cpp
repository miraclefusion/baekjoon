#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	list<char> L ;
	list<char>::iterator it = L.begin();
	string s;
	int n;
	char choose,alphabet;
	cin >> s;
	
	for (int i = 0; i<s.size();i++)
	{
		L.push_back(s[i]);
	}
	it = L.end();


	cin >> n;
	while (n--)
	{	
		cin >> choose;
			if (choose =='L')
			{
				if (it == L.begin())
					continue;
				it--; 	
			}
			if (choose =='D')
			{
				if( it == L.end())
					continue;
				it++;
			}
			if (choose =='B')
			{
				if (it == L.begin())
					continue;
				it--;
				it = L.erase(it);
			}
			if (choose =='P')
			{
				cin >> alphabet;
				L.insert(it,alphabet);
			}
	}	
	for (list<char>::iterator tt = L.begin(); tt != L.end(); tt++)
		cout << *tt;

	return 0;	
}