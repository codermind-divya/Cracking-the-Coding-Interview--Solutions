/**
 * Implement an algorithm to determine if a string has all unique characters.
 * What if you cannot use additional data structures?
 *
 * @author Divya
 *
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void FASTIO()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return;
}
int main()
{
    FASTIO();
  string s;
  cin>>s;
  bool arr[26];
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  memset(arr,0,sizeof(arr));
  for(int i=0;i<s.length();i++)
  {
      if(arr[s[i]-'a']==1){
      cout<<"No";
      return 0;
  }
  arr[s[i]-'a']=1;
  }
  cout<<"Yes";
    return 0;
}
