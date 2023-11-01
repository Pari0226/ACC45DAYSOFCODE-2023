#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i] >> b[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=0;j<n-i-1;j++)
	        {
	            if(a[j]>a[j+1])
	            {
	                int temp1=a[j];
	                a[j]=a[j+1];
	                a[j+1]=temp1;
	                int temp2=b[j];
	                b[j]=b[j+1];
	                b[j+1]=temp2;
	            }
	        }
	    }
	    
	   // for(int i=0;i<n;i++)
	   // {
	   //     cout << a[i] << " " << b[i] << endl;
	   // }
	    
	    int maxi=b[0],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<=8)
	        {
	            if(a[i]==a[i+1])
    	        {
    	            maxi=max(max(b[i],b[i+1]),maxi);
    	        }
    	        else
    	        {
    	            sum+=maxi;
    	            maxi=b[i+1];
    	        }
	        }
	    }
	    
	    cout << sum << endl;
	}
	return 0;
}
