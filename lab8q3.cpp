// include library
#include<iostream>
using namespace std;


/*
 Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/

void input(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<< " Enter the "<< i+1 << " element of array:";
		cin>> arr[i];
	}
}

	
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<< i+1 << " element of array:";
		cout<< arr[i];
		cout<< endl;
	}
}

void AS(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	for(int j=0;j<(size-1-i);j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
	}
}

void DS(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	for(int j=0;j<(size-1-i);j++)
	if(arr[j]<arr[j+1])
	{
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
	}
}




int kthlarge(int arr[],int n)
{
	DS(arr,n);
	print(arr,n);
	int k;
	cout<<"which largest number do you want?"<<endl;
	cin>>k;
	int p[n];
	int j=1;
	p[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		p[j++]=arr[i];
	}
	cout<<"the "<<k<<"th largest no. is="<<p[k-1]<<endl;
}

int kthsmall(int arr[],int n)
{
	AS(arr,n);
	print(arr,n);
	int k;
	cout<<"which smallest number do you want?"<<endl;
	cin>>k;
	int p[n];
	int j=1;
	p[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		p[j++]=arr[i];
	}

	cout<<"the "<<k<<"th smallest no. is="<<p[k-1]<<endl;
}





int main()
{	
	int n;
	cout<< "enter size :";
	cin>> n ;
	int arr[n];

	input(arr,n);
	AS(arr,n);
	print(arr,n);
	DS(arr,n);
	print(arr,n);
	kthlarge(arr,n);
	kthsmall(arr,n);
}
	
