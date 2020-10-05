#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
// for getting input from input.txt
	freopen("input.txt", "r", stdin);
// for writing output to output.txt
// freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	map<char, int> m;
	map<char, int>::iterator itr;
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}
	int c = 0;
	if (s.size() % 2 == 0)
	{
		for (itr = m.begin(); itr != m.end(); ++itr)
		{
			if (itr->second % 2 != 0)
			{
				c = 1;
				break;
			}
		}
		if (c == 1)
			cout << "False";
		else
			cout << "True";
	}
	else
	{
		c = 0;
		for (itr = m.begin(); itr != m.end(); ++itr)
		{
			if (itr->second % 2 != 0)
			{
				c++;
			}
		}
		if (c > 1)
			cout << "False";
		else
			cout << "True";
	}
//   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
