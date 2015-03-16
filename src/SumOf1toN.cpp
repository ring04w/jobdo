// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-16
//复杂度为O(n)，空间复杂度O(1)


#include <iostream>
using namespace std;

int int main(int argc, char const *argv[])
{
	int a = {10, 6, 9, 5, 2, 8, 4, 7, 1, 3};
	int len;
	len = sizeof(a) / sizeof(a[0]);
	int temp;
	int i;

	for(i = 0; i < len;)
	{
		temp = a[a[i] - 1];
		a[a[i] - 1] = a[i];
		a[i] = temp;

		if(a[i] == i + 1) i++;//When the first number located well, move ahead

	}


	for(i = 0; i < len; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}