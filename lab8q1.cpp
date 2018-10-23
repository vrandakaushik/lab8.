/include laibray
#include<iostream>
using namespace std;

/*
Write a program to find sum of all elements of an array. (Use functions)
*/

int sum(int arr[], int n){
	int sum =0;
	for (int i=0;i<n;i++)
	sum += arr[i];  // sum = sum + arr[];
	return sum;
}


int main(){
	cout<< "THIS PROGARM WILL TELL YOU THE SUM OF ALL ELEMENTS PRESENT IN ARRAY."<<endl;
	cout<<"what are the number of elements that you want in array?";
  	int n,a;
	cin>>n;
	int arr[n];
		for(a=1;a<=n;a++){
		cout<<"enter number"<<a;
		cin>>arr[a -1]	;
		}
	cout<<sum(arr,n);
}
