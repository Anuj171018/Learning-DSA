#include <iostream>
using namespace std;
int main ()
{	int a = 66;
	int *p=&a;
	int **q=&p;
	int ***r=&q;
	cout<<*p<<" "<<**q<<" "<<***r<<endl;
	cout<<p<<" "<<q<<" "<<r;

		return 0;
}
