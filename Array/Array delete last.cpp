#include <iostream>
using namespace std;
void deleteLast(int arr[],int s){
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main ()
{	int arr[] = {12,3,23,4,123,24,35,3,45,43,56,65,7,67,8,79,8};
	int s=sizeof(arr)/4;
	deleteLast(arr,s);
	s--;
	deleteLast(arr,s);
	s--;
	

		return 0;
}
