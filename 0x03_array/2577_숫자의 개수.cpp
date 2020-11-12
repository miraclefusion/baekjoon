#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int a,b,c;
	int num,nmg,mok;
	mok=0;

	int freq[11]={0};
	cin >> a >> b >> c ;
	
	num=a*b*c;
	
	while(num>=10)
	{
		nmg = num%10;
		num = num/10;
		freq[nmg]++;
		
	}
	freq[num]++;
	
	for (int i=0;i<10;i++)
		cout << freq[i] << " ";
	
	
	
}
