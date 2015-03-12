// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-12

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[])
{
	int i;
	int j;
	int M;
	int a[M];
	int b[M];
	cout<<"Please input the length of the array"<<endl<<">>>";
	cin>>M;
	
	cout<<"Please input a array"<<endl<<">>>";
	for(i = 0; i < M; ++i)
		cin>>a[i];
	
	for(j = 0; j < M; ++j)
	{
		b[j] = 0;//b[M] = {0...}
		for(i = 0; i < M; i++)
			{	
				if(j == a[i])
					b[j]++;
			}
	}
		
			
		for(j = 0; j < M; ++j)
			cout<<b[j]<<" ";
		int sum = 0;	
		for(j = 0; j < M; j++)
		{
			sum += b[j];
		}
		
		cout<<endl<<"array.length = sum[array[0...M-1]] ?"<<sum<<endl;
		return 0;
	
	}	
		

	
