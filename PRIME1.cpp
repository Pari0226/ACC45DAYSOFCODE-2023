#include <iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
    int j;
        for (j = 2; j <= sqrt(n); ++j) {
            if (n % j == 0) {
                return false;
            }
        }
       return true;
}
int main() {
	int T,m,n;
	cin>>T;
	for(int i=0;i<T;i++)
	{ 
	    cin>>m>>n;
	     for( int i=m;i<=n;i++)
	    {
	     if (i == 1 || i == 0)
            continue;
            if(isprime(i))
            {
               cout<<i<<endl; 
            }
	}
	}
	return 0;
}
