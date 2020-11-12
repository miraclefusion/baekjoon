#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >>n;
  string s1;
  string s2;
 
  int check=0;
  int freq1[27]={};
  int freq2[27]={};
  for (int i=0;i<n;i++)
  {
   
    cin >> s1 >> s2 ;
    
    for (auto c : s1)
      freq1[c-'a']++;
    for (auto c : s2)
      freq2[c-'a']++;  
    for (int k=0;k<27;k++)
      if (freq1[k]!=freq2[k])
      {
        cout << "Impossible\n" ;
        check=1;
        break;
      }
    if (check==0)
    cout << "Possible\n";
    check=0;
    fill(freq1,freq1+27,0);
    fill(freq2,freq2+27,0);

  }
  

}
