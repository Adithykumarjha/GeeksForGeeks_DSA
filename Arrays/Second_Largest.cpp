//SECOND LARGEST ELEMENT IN AN ARRAY
//SINGLE TRAVERSAL

#include<bits/stdc++.h>
using namespace std;

int SecondLargest(int arr[],int n){
	int first=0,second=-1;
	
	if(n<2)return -1;
	
	for(int i=1;i<n;i++){
		if(arr[i]>arr[first]){
			second=first;
			first=i;
		}
		else if(arr[i]<arr[first]){
			if(second== -1 ||arr[second]<arr[i] ){
				second=i;
			}
		}
	}
	return second;
}

int main(){
	int n;
	cout<<"Enter the size of the array:"<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the elements:"<<endl;
		cin>>arr[i];
	}
	
	int index=SecondLargest(arr,n);
	if(index==-1){
		cout<<"Didn't exist";
	}
	else
	cout<<"Second Largest element:"<<arr[index];
	return 0;
}


// Time Complexity : O(n)
// Space Complexity : O(1)
