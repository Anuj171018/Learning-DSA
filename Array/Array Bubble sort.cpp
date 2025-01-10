#include <iostream>
using namespace std;
int main ()
{	int arr[]={1,2,3,4,5,6,7,8,9,10,12,13,45,68,98,78,78};
	int s = sizeof(arr)/4;
	int t;
	cout<<"Before sorting : "<<endl;
	for(int i = 0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i = 0;i<s;i++){
		for (int j = i+1;j<s;j++){
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	cout<<"After sorting : "<<endl;
	for(int i = 0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

		return 0;
}
