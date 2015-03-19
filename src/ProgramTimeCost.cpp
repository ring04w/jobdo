// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-19


#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
	clock_t startTime;
	clock_t finishTime;
	double totalTime;
	startTime = clock();

	/********code******/
	finishTime = clock();

	totalTime = finishTime - startTime;
	cout<<totalTime<<endl;



	return 0;
}
