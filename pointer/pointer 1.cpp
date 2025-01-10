#include <iostream>
using namespace std;
int main ()
{	int  a = 12;
	int b = 13;
	int *p,*q;
	p=&a;
	q=&b;
	int t;
	cout<<a<<" "<<b<<endl;
	t=*p;
	*p=*q;
	*q=t;
	cout<<a<<" "<<b<<endl;
	cout<<*p<<" "<<*q<<endl;
	cout<<p<<" "<<q<<endl;

		return 0;
}
