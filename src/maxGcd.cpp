// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-07

#include <iostream>
using namespace std;


int gcd(int m, int n)
{
	int r;
	r = m % n;
	while(r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}

int main(int argc, char const *argv[])
{
	int p, q;
	cout<<"Please input 2 integer:"<<endl<<">>>";
	cin>>p>>q;
	cout<<"The gcd of p & q is:"<<endl<<gcd(p, q);
	return 0;
}