#include <iostream>
using namespace std;
void deleteFirst(int arr[],int s){
	for(int i = 0;i<s;i++){
		arr[i]=arr[i+1];
	}
	for(int i =0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main ()
{	int arr[]={12,123,15,56,4,5,5,9,66,3,5,5,96,622,34,79,78,56};
	int s =sizeof(arr)/4;
	
	for(int i = 0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	deleteFirst(arr,s);
	s--;
	

		return 0;
}
