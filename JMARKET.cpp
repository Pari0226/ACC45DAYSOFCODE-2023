#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int x,a,b,c,array[3];
	    cin>>x;
	    for(int i=0;i<3;i++){
	        cin>>array[i];
	    }
	    for(int i=0;i<3;i++){
	        for(int j=i+1;j<3;j++){
	        int temp;
	        if(array[i]>array[j]){
	            temp=array[i];
	            array[i]=array[j];
	            array[j]=temp;
	        }
	    }
  }
            int final=0;
            final=array[1]+(array[0]*(x-1)) ;
            cout<<final<<endl;
	}
	return 0;
}
