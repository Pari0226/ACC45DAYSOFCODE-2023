#include <bits/stdc++.h>
using namespace std;
int main() {
double a,b;
  char c;
	cin>>a;
	cin>>b;
	cin>>c;
	switch(c){
	    case '+': cout<<fixed<<setprecision(7)<<a+b<<endl;
	    break;
	    case '-': cout<<fixed<<setprecision(7)<<a-b<<endl;
	     break;
	    case '*': cout<<fixed<<setprecision(7)<<a*b<<endl;
	     break;
	    case '/': cout<<fixed<<setprecision(7)<<a/b<<endl;
	     break;
	}
	return 0;
}