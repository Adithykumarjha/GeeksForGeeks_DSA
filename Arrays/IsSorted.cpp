// CHECK WHETHER ARRAY IS SORTED OR NOT

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int n;
	cout<<"Enter the size of the array: "<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the array elements: "<<" ";
		cin>>arr[i];
	}
	
	if(isSorted(arr,n)){
		cout<<"The array is sorted";
	}
	else{
		cout<<"The array is not sorted";
	}
	return 0;
}



// Time Complexity : O(n)
// Space Complexity : O(1)
