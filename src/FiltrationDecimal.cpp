// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-16

//Need to review

#include <iostream>
using namespace std;


int int main(int argc, char const *argv[])
{
	int N;
	double array[N];
	int i;
	double max;
	double min;
	double temp;
	int sum = 0;
	int sumN = 0;
	int averageNum;
	int moreThanAverage = 0;
	for(i = 0; i < N; ++i)
	{
		cin>>array[i];
	}

	max = array[0];
	for(i = 0; i < N; ++i)
	{
		if(array[i] >= max)
			max = array[i];
	}
	cout<<"The biggest decimal is "<<max<<endl;
	cout<<"----------------------------------------"<<endl;


	min = array[0];
	for(i = 0; i < N; ++i)
	{
		if(array[i] <= min)
			min = array[i];
	}
	cout<<"The smallest decimal is "<<min<<endl;
	cout<<"----------------------------------------"<<endl;

//bubble Sort
	for(j = 1; j < N-1; ++j)
		for(i = 0; i < n-j; ++i)
		{
			if(a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
				
		}

		for(i = 0; i < n; ++i)
			cout<<a[i]<<" ";

		cout<<a[k-1]<<endl;


		//median number

		if(N % 2 == 0)
			cout<<"The median number are "<<a[N/2]<<", "<<a[N/2 + 1]<<endl;
		else
			cout<<"The median number is "<<a[(N + 1)/2]<<endl;

		//square sum
		for(i = 0; i < N; ++i){
			sum += a[i]*a[i];
		}

		cout<<"The square sum of numbers is "<<sum<<endl;

		//average number

		for(i = 0; i < N; ++i)
		{
			sumN += a[i];
		}

		averageNum = sumN / N;
		cout<<"The average number of the array is "<<averageNum<<endl;

		//percentage


		for(i = 0; i < N; ++i)
		{
			if(a[i] > averageNum)
				moreThanAverage++;
		}

		cout<<"The percentage of numbers which more than the average number is "<<100*(moreThanAverage/N)<<"%"<<endl;

		//random output all elements ?? 
		//

		cout<<a[rand() % N]<<" ";



	return 0;
}