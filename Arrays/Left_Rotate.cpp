// LEFT ROTATE AN ARRAY BY ONE

#include<bits/stdc++.h>
using namespace std;

void Left_rotate(int arr[],int n){
	int temp=arr[0];
	
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}

void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array: "<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	Left_rotate(arr,n);
	print(arr,n);
}
