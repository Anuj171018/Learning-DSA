#include <iostream>
using namespace std;

int main()
{
	int n = 45;
	int m = 75;
	int *p, *q;
	p = &n;
	q = &m;
	cout<<n<<"  "<<m<<endl;
	int t;
	t = *p;
	*p = *q;
	*q = t;
	
	cout<<n<<"  "<<m;
	
 	
}