#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int arr[5];
	    for(int i=0; i<5; i++){
	        cin>>arr[i];
	    }
	    int num=0;
	    for(int i=0; i<5; i++){
	        if(arr[i]==1){
	            num++;
	        }
	    }
	    if(num==0){
	        cout<<"Beginner"<<endl;
	    }
	    else if(num==1){
	        cout<<"Junior Developer"<<endl;
	    }
	    else if(num==2){
	        cout<<"Middle Developer"<<endl;
	    }
	    else if(num==3){
	        cout<<"Senior Developer"<<endl;
	    }
	    else if(num==4){
	        cout<<"Hacker"<<endl;
	    }
	    else{
	        cout<<"Jeff Dean"<<endl;
	    }
	    t--;
	}
	return 0;
}