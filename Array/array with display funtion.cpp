#include <iostream>
using namespace std;
int arr[100];
void displayArray(int arr[],int n){
	cout<<"Array data : "<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main ()
{
	cout<<"Enter the size of array (max:9) : ";
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	displayArray(arr,n);
		return 0;
}
