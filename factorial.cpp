#include<iostream>
using namespace std;
int main(){

	int n,i,result=1;
	cin>>n;
	
	int fact;
	
	if(n<0){
	    cout<<"error";
	    
	}
	else if(n=0){
	    cout<<1;
	}
	else{
 	    for (i=0;i<=n;i++)
		result*=n;    
		
	}

cout<<"factorial of the number :"<<result;
	return 0;
}
