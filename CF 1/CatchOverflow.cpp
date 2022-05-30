#include<bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < int(n); i++)
using namespace std;
const long long INF = 1ll << 32;
int main(){

int l ;
cin>>l;

stack<long long>st;
st.push(1);

long long res =0 ;

forn(_,l)
{
    string t ;
    cin>>t;

    if(t=="for"){
        int x ;
        cin>>x;
        st.push(min(INF,st.top()*x));
    }
    else if(t=="end"){
        st.pop();
    }
    else{
        res+=st.top();
    }
}

    if(res>=INF)
        cout<< "OVERFLOW!!!" <<endl;

    else
        cout<< res <<endl;

}

