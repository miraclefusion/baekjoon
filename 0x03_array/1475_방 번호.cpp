#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int freq[10]={0};   
	int nmg,mok,max=-999;
	cin >> n;
	int six_nine_cnt=0;
	if (n==0)
		cout << "1";
	else
	{	
		while (n>0)
		{
			mok = n / 10;
			nmg = n % 10;
			freq[nmg]++;
			n=mok;
		}
		six_nine_cnt = (freq[9]+freq[6]+1)/2;
		freq[6]=six_nine_cnt;
		
		for (int i=0;i<9;i++)
		{
			if (max<freq[i])
				max=freq[i];
		}
		cout << max;
	}	
}
