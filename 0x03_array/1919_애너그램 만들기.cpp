#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int freq[26]={0};
	int freq2[26]={0};
	int cnt=0;
	string s1,s2;
	cin >> s1 >> s2;
	
	for (int i=0;i<s1.size();i++)
		freq[s1[i]-'a']++;
	for (int i=0;i<s2.size();i++)
		freq2[s2[i]-'a']++;
		
	for (int i=0;i<26;i++)
	{
		if (abs(freq[i]-freq2[i])!=0)
			cnt=cnt+abs(freq[i]-freq2[i]);
	}
	
	cout << cnt;
}
