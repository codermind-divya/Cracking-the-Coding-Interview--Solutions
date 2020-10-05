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
	string s1, s2;
	cin >> s1 >> s2;
	int count[256] = {0};
	int i = 0;
	for (int i = 0; s1[i] && s2[i]; i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}
	if (s1[i] != s2[i] ) {
		cout << "No";
		return 0;
	}
	int f = 0;
	for (int i = 0; i < 256; i++)
	{
		if (count[i]) {
			f = 1;
			break;
		}
	}
	if (f == 1)
		cout << "No";
	else
		cout << "Yes";
//   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}