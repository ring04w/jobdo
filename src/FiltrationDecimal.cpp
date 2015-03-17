// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-17
//第K小的数
//随机输出数组元素

#include <iostream>
using namespace std;

void ArrayInput(int a[], int N)
{
	int i;
	for(i = 0; i < N; ++i)
		cin>>a[i];
}

void MaxValueOfArrayOutput(int a[], int N)
{
	int max;
	max = a[0];
	for(i = 0; i < N; ++i)
	{
		if(array[i] >= max)
			max = array[i];
	}
	cout<<"The biggest decimal is "<<max<<endl;
	cout<<"----------------------------------------"<<endl;
}

void MinValueOfArrayOutput(int a[], int N)
{
	int min;
	min = a[0];
	for(i = 0; i < N; ++i)
	{
		if(array[i] <= min)
			min = array[i];
	}
	cout<<"The least decimal is "<<min<<endl;
	cout<<"----------------------------------------"<<endl;
}

void BubbleSortAndOutput(int a[], int N)
{
	int temp;
	int i;
	int j;
	for(j = 1; j < N - 1; ++j)
		for(i = 0; i < N - j; ++i)
		{
			if(a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	cout<<"The original array is "<<endl;
		for(i = 0; i < N; ++i)
			cout<<a[i]<<" ";
	cout<<"----------------------------------------"<<endl;
}

void KthDecimalOfArrayOutput(int a[])
{
	int k;
	cout<<"Please input the K"<<endl<<">>>";
	cin>>k;
	cout<<"The Kth least decimal is "<<endl;
	cout<<a[k - 1]<<endl;
	cout<<"----------------------------------------"<<endl;


}


void MedianDecimalOutput(int a[], int N)
{
	cout<<"The median decimal of the array is "<<endl;
	if(N % 2 == 0)
		cout<<a[(N / 2) - 1]<<" "<<a[N / 2]<<endl;
	else
		cout<<a[(N - 1) / 2]<<endl;
	cout<<"----------------------------------------"<<endl;
}

void SquareSumOfArrayOutput(int a[], int N)
{
	int SquareSum = 0;
	int i;
	for(i = 0; i < N; ++i)
	{
		SquareSum += a[i]*a[i];
	}
	cout<<"The square sum of the array is "<<SquareSum<<endl;
	cout<<"----------------------------------------"<<endl;
}

void AverageOfSumValue(int a[], int N)
{
	int sum;
	int i;
	int AverageOfSum;
	for(i = 0; i < N; ++i)
	{
		sum += a[i];
	}
	AverageOfSum = sum / N;
	cout<<"The average value of the array is  "<<AverageOfSum<<endl;
	cout<<"----------------------------------------"<<endl;
}

void MoreThanAverageValueOfArrayOutput(int a[],  int N)
{
	int moreThanAve = 0;
	for(i = 0; i < N; ++i)
	{
		if(a[i] > AverageOfSum)
			moreThanAve++;
	}
	cout<<"The percentage of decimal  which more than agerage value is "<<(double)(100*moreThanAve) / N<<"%"<<endl;
	cout<<"----------------------------------------"<<endl;
}




//生成一个范围的不重复随机数
void GetRandomSquare(int a[], int N, int output[])
{
	int originLength = N;
	for(i = 0; i < N; ++i)
	{
		num = rand() % N;
		output[i] = a[num];
		a[num] = a[N - 1];
		N--;
	}

	for(i = 0; i < originLength; ++i)
		{
			cout<<output[i]<<" "<<endl;
		}
}


//将GetRandomSquare()生成的数组当成原小数数组的角标进行输出
void ArrayRandomOutput(int a[], int N, int output[])
{
	for(i = 0; i < N; ++i)
	{
		cout<<a[output[i]]<<" ";
	}
}


int main(int argc, char const *argv[])
{
	int a[100];
	int N;
	int output[100];
	ArrayInput(a, N);
	MaxValueOfArrayOutput(a, N);
	MinValueOfArrayOutput(a, N);
	BubbleSortAndOutput(a, N);
	KthDecimalOfArrayOutput(a);
	MedianDecimalOutput(a, N);
	SquareSumOfArrayOutput(a, N);
	AverageOfSumValue(a, N);
	MoreThanAverageValueOfArrayOutput(a, N);
	GetRandomSquare(a, N, output);
	ArrayRandomOutput(a, N, output);
	return 0;


}


