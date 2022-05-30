#include<bits/stdc++.h>
using namespace std;
string a, b, a1, a2, b1, b2;
string isep(string s)
{
	if (s.size() % 2) return s;
	string a1 = isep(s.substr(0, s.size() / 2));
	string a2 = isep(s.substr(s.size() / 2, s.size()));
	if (a1 > a2) return (a2 + a1);
	else return (a1 + a2);
}
int main() {
	cin >> a >> b;
	if (isep(a) == isep(b)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}