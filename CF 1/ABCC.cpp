#include<bits/stdc++.h>
using namespace std ;
unsigned int rev = 0;
int main(){
int n ;
cin>>n;
while(n--){

    int len ;
    cin>>len ;
    string st ;
    for(int i=0;i<len;i++){
        cin>>st;
        rev<<=1;
        if(st[i]&1==1){
            rev^=1;
            n>>=1;
        }
    }
    return rev;
}

}
