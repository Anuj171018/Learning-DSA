#include <iostream>
using namespace std;
int main ()
{
	int arr[]= {31,2,34,23,4,345,5,54,6,56,7,567,8,65,78};
 	int s = sizeof(arr)/4;
 	int key;
 	cout<<"Enter the key : ";
 	cin>>key;
	bool abc=true;
	for (int i=0;i<s;i++){
		if(arr[i]==key){
			abc=false;
			cout<<"The key is found at position : "<<i+1<<endl;
		}
	}
	if(abc){
		cout<<"Element not founded";
	}
 	
		return 0;
}
