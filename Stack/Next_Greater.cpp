// NEXT GREATER ELEMENT

// STACK IMPLEMENTATION

#include<bits/stdc++.h>
using namespace std;

void nxt_grtr(int arr[],int n){
	stack<int>s;
	s.push(arr[n-1]);
	cout<<"-1,";
	
	for(int i=n-2;i>=0;i--){
		while(s.empty()==false && s.top()<=arr[i]){
			s.pop();
		}
		
		s.empty()? cout<<"-1,":cout<<s.top()<<" ";
		s.push(arr[i]);
	}
}
int main(){
	int arr[]={20,30,10,5,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	nxt_grtr(arr,n);
	cout<<r;
	return 0;
}
