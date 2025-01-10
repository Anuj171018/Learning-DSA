#include <iostream>
using namespace std;
int fact(int);
int fact( int n){
	if(n==1){
		return 1;
	}
	else{
		int x = n*fact(n-1);
	}
}
int main ()
{	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<"fact of the number is : "<<fact(n);

		return 0;
}
