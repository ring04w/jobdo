
// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-12

#include <iostream>
using namespace std;
//#define M 3
//#define N 4
int main()
{

	int M;
	int N;
	int i;
	int j;
	cout<<"Please input the line and column"<<endl<<">>>";
	cin>>M>>N;
	int array[M][N];
	int brrby[N][M];
	cout<<"Please input the array M*N"<<endl<<">>>";
	
	for(i= 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			cin>>array[i][j];
		}
	}
	
	for(j= 0; j < N; j++)
	{
		for(i = 0; i < M; i++)
		{
			brrby[j][i] = array[i][j];
			
		}
	}
	
		for(j= 0; j < N; j++)
		{
			for(i = 0; i < M; i++)
			{
				cout<<brrby[j][i]<<" ";
			}
			cout<<endl;
		}
	
	
	return 0;
}