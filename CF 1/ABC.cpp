/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
unsigned int reverseBits(unsigned int n)
{
      int len ;
      cin>>len;
      str
    for(int i =0 ; i<len)
    unsigned int rev = 0;
    while (n > 0)
    {
        rev <<= 1;
        if (n & 1 == 1)
            rev ^= 1;
        n >>= 1;
    }
    return rev;
}
bool isPalindrome(unsigned int n)
{
    unsigned int rev = reverseBits(n);

    return (n == rev);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int n = 1010;
    if (isPalindrome(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

