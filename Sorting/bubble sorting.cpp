#include <iostream>
using namespace std;
void bbl_sort(int arr[],int s){
	for(int i =0;i<s;i++){
		for(int j=i+1;j<s;j++){
			if(arr[i]>arr[j]){
			int t = arr[i];
			arr[i]=arr[j];
			arr[j]=t;
			}
		}
	}	
}
void show(int arr[],int s){
	cout<<"Element of array : "<<endl;
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}
int main ()
{	
	int arr[]={11,25,89,76,56,48,98,77,441,225,55,66,88,74,41,25,36,95,75,65,25,31};
	int s = sizeof(arr)/4;
		
		show(arr,s);
		bbl_sort(arr,s);
		show(arr,s);
	

		return 0;
}
