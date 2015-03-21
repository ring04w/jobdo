
// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-15

#include <iostream>
using namespace std;


int BinarySearch(int a[], int key, int N)
{
	int low = 0;
	int upper = N -1;
	int i;
	int mid;
	for(i = 0; i < N; ++i)
	{
		mid = (low + upper) / 2;
		if(key > a[mid])
			low = mid + 1;
		else if(key < a[mid])
			upper = md - 1;
		else 
			return mid;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	
	int  arr[] = {-9, -4, -1, 0, 6, 7, 9, 10, 20, 50};
	int i;
	int keyInteger;
	int keyPosition;
	cout<<"Please input the integer you want to find:"<<endl<<">>>";
	cin>>keyInteger;

	keyPosition =  BinarySearch(arr, keyInteger, 10);
	cout<<"The position of integer you want to find in the  array is "<<keyPosition + 1<<endl;

	return 0;
}