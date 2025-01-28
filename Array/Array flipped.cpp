#include <iostream>
using namespace std;
int main ()
{	int pos,mid,n,t;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"orignal array : "<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n Enter the position : ";
	cin>>pos;
	mid=(n+pos)/2;
	for(int i=pos,j=1;i<mid;i++,j++){
		t=arr[i];
		arr[i]=arr[n-j];
		arr[n-j]=t;
	}
	cout<<"fliped  array : "<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}

		return 0;
}
