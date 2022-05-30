#include <bits/stdc++.h>
#include <string>
using namespace std;
string s,x;
int n;
int main() {
    cin >> n;
    cin >> s;
    for (int i=0;i<n;i++) {
        if ((n-i)%2) x+=s[i]; else x=s[i]+x;
    }
    cout << x;
return 0;
}

