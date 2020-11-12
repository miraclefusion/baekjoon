#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int N,a,v;
	int freq[205]={0};		// number is between -100 ~ 100 therefore it contains 200 numbers  
	cin >> N;

	int arr[105]={0};		// array size between 0 and 100 
	for (int i=0;i<N;i++)
	{
		cin >> a;
		arr[i]= a;
	}	
	cin >> v;
	for (int i=0;i<N;i++)
	{
		freq[arr[i]+100]++;
	}
	
	cout << freq[v+100];
	return 0; 
	
}
