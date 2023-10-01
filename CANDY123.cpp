#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	   
	    int cl=1;
	    int cb=cl+1;
	    int sumcl=0;
	    int sumcb=0;
	    
	    
	    
	    while(sumcl<=a && sumcb<=b){
	        sumcl=sumcl+cl;
	        sumcb=sumcb+cb;
	        cl=cl+2;
	        cb=cl+1;
	        
	    }
	    if(sumcl>a)
	        cout<<"Bob"<<endl;
	   
	    else if(sumcb>b)
	        cout<<"Limak"<<endl;
	   
	    else if(sumcl>=a && sumcb>=b)
	        cout<<"Bob"<<endl;
	   
	}
	    
	return 0;
}
