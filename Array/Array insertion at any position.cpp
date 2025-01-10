#include <iostream>
using namespace std;
int arr[100];

int main ()
{	cout<<"Enter the size of array (max:9) : ";
	int x;
	cin>>x;
	
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	cout<<"Orignal array : "<<endl;
	
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int a;
	cout<<"Enter the data that is added at last : ";
	cin>>a;
	int pos;
	cout<<"Enter the position of insertion : ";
	cin>>pos;
	
	for(int i=x;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=a;
	x++;
	
	cout<<"Array after the incertion at the end : "<<endl;
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	

		return 0;
}
