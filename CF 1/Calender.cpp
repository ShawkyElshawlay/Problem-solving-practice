#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

long long y, m, d, y2, m2, d2, ans;
int s[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	scanf("%lld:%lld:%lld", &y, &m, &d);
	scanf("%lld:%lld:%lld", &y2, &m2, &d2);
	if(y > y2 || y == y2 && m > m2 || y == y2 && m == m2 && d > d2)
	{
		swap(y, y2);
		swap(m, m2);
		swap(d, d2);
	}
	while(y != y2 || m != m2 || d != d2)
	{
		if(!(y % 4) && y % 100 || !(y % 400)) s[2] = 29;
		else s[2] = 28;
		d++;
		ans++;
		if(d > s[m])
		{
		    d = 1;
		    m++;
		}
		if(m > 12)
		{
		    m = 1;
		    y++;
		}
	}
	cout << ans << endl;
	return 0;
}
