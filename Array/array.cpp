#include <iostream>
using namespace std;
int arr[100];
int main ()
{	cout<<"Enter the size of array (max:9) : ";
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Orignal Array "<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}

		return 0;
}
