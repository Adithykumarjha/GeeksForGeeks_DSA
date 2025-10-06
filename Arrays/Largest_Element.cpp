//LARGEST ELEMENT IN AN ARRAY

//LINEAR TRAVERSAL METHOD



#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
	int max=arr[0];
	
	for(int i=0;i<=n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
	
}

int main(){
	int n;
	cout<<"Enter the size of the array:"<<" ";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter the Elements :"<<" ";
		cin>>arr[i];
	}
	
	cout<<"The largest element in the array is: "<<largest(arr,n);
	return 0;
}





