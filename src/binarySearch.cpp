// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-07



#include <iostream>
using namespace std;

int binarySearch(int array[], int key, int N)
{
	int min = 0;
	int max = N - 1;
	int mid;
	while(min <= max)
	{
		mid = (min + max) / 2;
		if(key < array[mid])
			max = mid - 1;
		else if(key > array[mid])
			min = mid + 1;
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

	keyPosition =  binarySearch(arr, keyInteger, 10);
	cout<<"The position of integer you want to find in the  array is "<<keyPosition<<endl;

	return 0;
}