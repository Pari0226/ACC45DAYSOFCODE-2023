#include <bits/stdc++.h>
#include <iostream>



using namespace std;

int main() {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "p", stdout);
#endif


long long qw;
    cin>>qw;
    while(qw--){
        long long cv;
        cin>>cv;
        long long s[cv];
        long long x=0;
        for(long long e=0; e<cv; ++e){
            cin>>s[e];
            if(s[e]%2 + e*0)
            ++x;
        }
        if(x==0 || x%2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}


