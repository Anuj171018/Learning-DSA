#include <iostream>
using namespace std;
int arr[] = {17,21,1,12,7,4,81,18,202,13,9,25,45,32,23,21};
int n = sizeof(arr)/4;

void selection_sort(){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				swap(arr[j],arr[min]);
			}
		}
		swap(arr[min],arr[i]);
	}
}

void show(){
	cout<<"Element of the array are : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main ()
{
	
	selection_sort();
	show();
	
		return 0;
}
