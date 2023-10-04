#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    for(int i=0;i<N;i++)
	    cin>>B[i];
	    
	    int om=0,addy=0,max_o=0,max_a=0;
	    
	    for(int i=0;i<N;i++)
	    {
	        if(A[i]==0)
	        om=0;
	        else 
	        om++;
	        if(om>max_o)
	        max_o=om;
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(B[i]==0)
	        addy=0;
	        else 
	        addy++;
	        if(addy>max_a)
	        max_a=addy;
	    }
	    if(max_o==max_a)
	    cout<<"Draw"<<endl;
	    else if(max_o>max_a)
	    cout<<"Om"<<endl;
	    else
	    cout<<"Addy"<<endl;
	}
	return 0;
}
