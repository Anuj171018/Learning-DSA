#include <iostream>
using namespace std;
int arr[100];
int main ()
{	cout<<"Enter the size of array(max:9) : ";
	int n;
	cin>>n;
	for(int i =0;i<n;i++) {
		cin>>arr[i];
	}
	
	cout<<"Orignal array"<<endl;
	
	for(int i = 0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	int x;
	cout<<"Enter the new data : ";
	cin>>x;
	
	for(int i =n;i>=0;i--) {
		arr[i+1]=arr[i];
	}
	arr[0]=x;
	n++;
	
	cout<<"Enter at the first of array : "<<endl;
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	

		return 0;
}
