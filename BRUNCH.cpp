#include <iostream>
using namespace std;
#define ll long long

void sol(){
    int x,y;cin>>x>>y;
	int p = x/y;
	cout<<min(20,p)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
    while (t--) sol();
    return 0;
}
