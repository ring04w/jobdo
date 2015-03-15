// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-15


#include <iostream>
using namespace std;

void arrayInput(int array[], int N)
{
	int i;
	for(i = 0; i < N; ++i)
	{
		cin>>array[i];
	}
}

int rank(int key, int a[], int N)
{
	int i;
	int lessThanKey = 0;
	for(i = 0; i < N; ++i)
	{
		if(a[i] < key)
			lessThanKey++;
		else
			break; 
	}
	return lessThanKey;
}

int count(int key, int a[], int N)
{
	int i;
	int equalKey = 0;
	for(i = 0; i < N; ++i)
	{
		if(a[i] == key)
			equalKey++;
	}
	return equalKey;
}


int main(int argc, char const *argv[])
{
	int m;
	int n;
	int i;
	int array[100];
	cout<<"Please input the array"<<endl<<">>>";
	arrayInput(array, 11);

	//int array[] = {0, 1, 2, 3, 4, 5, 5, 5, 7, 8, 10};
	m = rank(5, array, 11);
	cout<<"There are "<<m<<" numbers which less than Key"<<endl;
	
	n = count(5, array, 11);
	cout<<"There are "<<n<<" numbers which equal to Key"<<endl;
	return 0;
}