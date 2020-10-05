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
	string s, v = "";
	int n;
	cin.ignore();
	getline(cin, s);
	cin >> n;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ') {
			v += "%";
			v += "20";
		}
		else
			v += s[i];
	}
	cout << v << '\n';
//   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
