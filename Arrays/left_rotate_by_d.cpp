// LEFT ROTATE AN ARRAY BY D 


// METHOD - 1  (NAIVE APPROACH )

#include<bits/stdc++.h>
using namespace std;


void left_rotate(int arr[],int n){
	int temp=arr[0];
	
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}

void n_rotate(int arr[], int n, int d){
	for(int i=0;i<d;i++){
		left_rotate(arr,n);
	}
}


void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int n;
	int d;
	cout<<"Enter no. of rotates:"<<endl;
	cin>>d;
	cout<<"Enter the size of the array: "<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	left_rotate(arr,n);
	n_rotate(arr,n,d);
	print(arr,n);
	return 0;
}


