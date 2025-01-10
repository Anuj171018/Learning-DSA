#include <iostream>
using namespace std;
int BinSearch(int arr[],int s,int key){
	int low,high,mid;
	low=0;
	high=s-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=high-1;
		}
	}
	return -1;
}
int main ()
{	int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,111,222,333,444,555,666};
	int s=sizeof(arr)/4;
	int key;
	cout<<"Enter the key : ";
	cin>>key;
	
	int x=BinSearch(arr,s,key);
	cout<<"pos of key is : "<<x;

		return 0;
}
