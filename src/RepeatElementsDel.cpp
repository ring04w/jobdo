// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-14


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int a[8];
	int b[8];
	
	for(i = 0; i < 8; i++)
		cin>>a[i];
	for(i = 0; i < 8; i++)
		{
			for(j = i; j < 8; j++)
				{
					if(a[j] == a[i])
					a[j] = -1;
				}
		
		}
		
		
    int cnt = 0;
	for(i = 0; i < 8; i ++)
	{
		if(a[i] == -1)
		{
			continue;
		}
		else{
			b[cnt] = a[i];
			cnt++;
	}	
}
//	int length;
	//length = sizeof(b)/sizeof(int);
	for(i = 0; i <= cnt; i++)
		cout<<b[i];
		
	return 0;
}