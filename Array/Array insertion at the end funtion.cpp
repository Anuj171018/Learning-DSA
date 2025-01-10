#include <iostream>
using namespace std;
int arr[100];
void addAtLast(int arr[],int n){
	
//	cout<<"Orignal Array : "<<endl;
//	for(int i = 0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
	cout<<endl;
	int x ;
	cout<<"Enter the new data : ";
	cin>>x;
	
	arr[n]=x;
	n++;
	
	cout<<"After the insertion at the last : "<<endl;
	for(int i =0 ;i<n;i++ ){
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
	cout<<"Orignal Array : "<<endl;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";}
		
		addAtLast(arr, n);
		addAtLast(arr, n);
		addAtLast(arr, n);
		
		
	
	
		return 0;
}
