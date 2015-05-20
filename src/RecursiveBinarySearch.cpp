#include <iostream>
using namespace std;


int BinarySearch(int array[], int key, int min, int max)
{
	min = 0;
	max = N -1;
	int mid;
	while(min <= max)
	{
		mid = (min + max) / 2;
		if(key < array[mid])
			return BinarySearch(array, key, min, mid - 1);
		else if(key > array[mid])
			return BinarySearch(array, key, mid + 1, max);
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
	for(i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		if(arr[i] != keyInteger)
			break;
		
	} 

	keyPosition =  binarySearch(arr, keyInteger, 0, 10);
	cout<<"The position of integer you want to find in the  array is "<<keyPosition<<endl;

	return 0;
}