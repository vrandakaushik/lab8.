// include library
#include<iostream>
using namespace std;


/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
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
		cout<<  i+1 << " element of array:";
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



float mean(int arr[], int n){
	int sum =0;
	for (int i=0;i<n;i++){
	sum += arr[i] ;
	}
	  
	return (float) sum/n;
}
void min(int arr[])
{
	cout<<"the minimum no in array is:"<<arr[0];
}

void max(int arr[],int n)
{
	
	cout<<"the maximum no in array is:"<<arr[n-1];
}


float median(int arr[],int n)
{
	if(n%2)
	return arr[(n-1)/2];
	else
	return (float)(arr[(n/2)] + arr[ (n/2)-1]) /2; 
}

int mode(int arr[],int n)

{
	
	int f=1,mf=1,mv=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		f++;
		else
		f=1;

		if(f>mf)
		{
			mf=f;
			mv=arr[i];
		}
	}
	cout<<"mode= "<<mv<<endl;
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
	cout<<"the mean is "<<mean(arr,n)<<endl;
	cout<<"the median is "<<median(arr,n)<<endl;
	min(arr);
	cout<<endl;
	max(arr,n);
	cout<<endl;
	mode(arr,n);
}
