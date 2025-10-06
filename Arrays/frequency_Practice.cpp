// FREQUENCY OF AN ELEMENT IN AN ARRAY

#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){
	unordered_map<int,int>freq;
	
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	
	for(auto x:freq){
		cout<<x.first<<"->"<<x.second<<endl;
	}
}

int main(){
	int arr[]{2,5,1,4,3,2,1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	frequency(arr,n);
	return 0;
}
