
// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-15

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

void isPrime(int m, int n)
{
	if(gcd(m, n) == 1)
		return true;
	else
		return -1;

}
/***********
void ijOfArrayComprime(int a[], int M, int N)
{
	int i;
	int j;
	for(i = 0; i < M; ++i)
		for(j = 0; j < N; ++j)
		{
			if
		}
}
*************/

int main(int argc, char const *argv[])
{
	int isM;
	isM = isPrime(16, 24);
	if(isM)
		cout<<"16 and 24 is comprime"<<endl;
	else
		cout<<"16 and 24 is not comprime"<<endl;

	return 0;
}