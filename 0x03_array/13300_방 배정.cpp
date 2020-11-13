#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int n,k;
	int gender;	// 1: ³² 0: ¿© 
	int grade;
	int room=0;
	double f;
	
	int grade_girl_num[7]={0};
	int grade_boy_num[7]={0};
	
	cin >> n >> k;
	for (int i=0;i<n;i++)
	{
		cin >> gender >> grade;
		if (gender ==1)
			grade_boy_num[grade]++;
		else
			grade_girl_num[grade]++;			
				
	}
	
	for (int i=1;i<7;i++)
	{
		room=room+(grade_boy_num[i]+k-1)/k+(grade_girl_num[i]+k-1)/k;
	}
	
	cout << room;
	
	
	
}
