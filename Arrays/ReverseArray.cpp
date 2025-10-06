// Reverse an  Array

#include<bits/stdc++.h>
using namespace std;


void ReverseArray(int arr[],int first,int last){
	while(first<last){
		int temp=arr[first];
		arr[first]=arr[last];
		arr[last]=temp;
		first++;
		last--;
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int n;
	cout<<"Enter the size of the array:"<<" ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the element:"<<" ";
		cin>>arr[i];
	}
	
	PrintArray(arr,n);
	
	ReverseArray(arr,0,n-1);
	cout<<"\nThe Reversed array is: "<<endl;
	PrintArray(arr,n);
	
	return 0;
	
}
