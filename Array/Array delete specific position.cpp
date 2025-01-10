#include <iostream>
using namespace std;
int main ()
{	int arr[] = {12,3,23,4,123,24,35,3,45,43,56,65,7,67,8,79,8};
	int s=sizeof(arr)/4;
	for(int i =0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int pos;
	cout<<"Enter the positon to delete : ";
	cin>>pos;
	
	for(int i=pos;i<s;i++){
		arr[i]=arr[i+1];
	}
	s--;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}

		return 0;
}
