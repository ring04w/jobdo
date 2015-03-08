// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-08



#include <iostream>
#include <cstdlib>
using namespace std;


void rectangleDraw(int x, int y)
{
	int i;
	int j;
	int m;
	int n;
	for(i = 1; i <= x; ++i)
	{
		for (j = 1; j <= y; ++j)
		{
			m = x - i;
			n = y - j;
			if((m == x - 1)||(n == y - 1)||(m == 0)||(n == 0))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}


/********
void randArray(int N)
{
	
	int i;
	int a[N];
	double x;
	double y;
	double rw;
	double rh;
	for(i = 0; i < N; ++i)
	{
		a[i] = rand();
	}

	for(i = 0; i < N; i++)
	{
		x = 1.0*i/N;
		y = a[i]/2.0;
		rw = 0.5/N;
		rh = a[i]/2.0;

	}
}
*************/
int main(int argc, char const *argv[])
{
	/*******
	int i;
	for (int i = 0; i < ; ++i)
	{
		cout<<rand()<<endl;

	}
	return 0;
******/
	int rw, rh;
	cout<<"Please input the width & height:"<<endl<<">>>";
	cin>>rw>>rh;
	rectangleDraw(rw, rh);
	return 0;
}