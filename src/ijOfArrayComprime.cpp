
// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-15

#include <iostream>
using namespace std;


const int N = 4;

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

int isPrime(int m, int n)
{
	if(gcd(m, n) > 1)
		return 0;
	else
		return 1;

}

void ijOfArrayComprime(int a[N][N], int N)
{
	int i;
	int j;
	for(i = 0; i < N; ++i)
		for(j = 0; j < N; ++j)
		{
			if(isPrime(i, j))
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
}



int main(int argc, char const *argv[])
{
	/***********
	int isM;
	isM = isPrime(16, 24);
	if(isM)
		cout<<"16 and 24 is  comprime"<<endl;
	else
		cout<<"16 and 24 is not  comprime"<<endl;
*********/
	//int M;
	//int N;
	int i;
	int j;
	int a[N][N];
//	cout<<"Please input the line and row of the array"<<endl<<">>>";
//	cin>>M>>N;
	ijOfArrayComprime(a, N);
	
	for(i = 0; i < N; ++i)
		for(j = 0; j < N; ++j)
			{
				cout<<a[i][j];
				cout<<endl;
			}



	return 0;
}