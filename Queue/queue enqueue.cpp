#include <iostream>
using namespace std;
#define n 5
int queue[n];
int f=-1;
int r=-1;
void enqueu(int x){
	if(r==n-1){
		cout<<"Queue is full "<<endl;
		return;
	}
	if(f==-1){
		f=0;
	}
	r++;
	queue[r]=x;
	cout<<"New element in queue is : "<<x<<endl;
}
int main ()
{	enqueu(10);
	enqueu(20);
	enqueu(30);
	enqueu(40);
	enqueu(50);
	enqueu(60);
	enqueu(70);
	enqueu(80);
	enqueu(90);

		return 0;
}
