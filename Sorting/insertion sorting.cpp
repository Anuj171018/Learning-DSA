#include <iostream>
using namespace std;
void ins_sort(int arr[],int s)
{
	for (int i = 1;i<s;i++){
	int key = arr[i];
	int j=i-1;
	while(j>=0 and key < arr[j]){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1] = key;
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
		ins_sort(arr,s);
		show(arr,s);
	

		return 0;
}
