#include <iostream>
using namespace std;
int BinSearch(int arr[],int s,int key){
	int low,high,mid;
	low=0;
	high=s-1;
	while (low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main ()
{	
	int arr[] = {1,2,4,5,7,8,9,12,13,16,18,20,24,26,29,31,50};
 	int s = sizeof(arr)/4;
 	
 	int key;
 	cout<<"Enter key: ";
 	cin>>key;

	int  x = BinSearch(arr,s,key);
	cout<<x; 

		return 0;
}
