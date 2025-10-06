#include<bits/stdc++.h>
using namespace std;

int maxlen(int arr[],int n,int sum){
	
	int res=0;
	
	for(int i=0;i<n;i++){
		int curr_sum=0;
		for(int j=i;j<n;j++){
			curr_sum +=arr[j];
			if(curr_sum==sum){
				res=max(res,j-i+1);
			}
		}
	
	}
	return res;
}

int main(){
	int n;
	int sum=7;
	cout<<"Enter the size of the array:"<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	
	int ans=maxlen(arr,n,sum);
	cout<<"The longest subarray with given sum is: "<<ans;
	return 0;
}
