// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-18

#include <iostream>
using namespace std;
//每次投两个筛子之和(2,3,4 ...12)的可能性分别为

/*****************
void ProbabilityOfThrowSieve(int a[], int n)
{
	 for(i = 2; i < 13; ++i)
	 {
	 	b[i] = 0;
	 	for(a = 1; a <= 6; ++a)
	 	{
	 		b = i - a;
	 		if(b > 0)
	 			b[i]++;
	 		else
	 			continue;
	 	}
	 }

	 for(i = 2; i < 13; ++i)
	 	cout<<a[i]<<" ";
	 
}
****************/
int main(int argc, char const *argv[])
{
	int i;
	int m[100];
	int a;
	int b;
	double sumOfProbability = 0.0;
	 for(i = 2; i < 13; ++i)
	 {
	 	m[i] = 0;
	 	for(a = 1; a <= 6; ++a)
	 	{
	 		b = i - a;
	 		if(b > 0 && b < 7)
	 			m[i]++;
	 		else
	 			continue;
	 	}
	 }

	 for(i = 2; i < 13; ++i)
	 	cout<<m[i]<<" ";
	 	
	cout<<endl;
	 	
	for(i = 2; i < 13; ++i)
		cout<<"The probability of differenet sum("<<i<<") of two sieves is "<<m[i]/36.0<<endl;
		sumOfProbability = sumOfProbability + (m[i])/36.0;
	
	cout<<"The sum of the probability is "<<sumOfProbability<<endl;

	 return 0;
}

/////////////////////////
/********************
output:
1 2 3 4 5 6 5 4 3 2 1
The probability of differenet sum(2) of two sieves is 0.0277778
The probability of differenet sum(3) of two sieves is 0.0555556
The probability of differenet sum(4) of two sieves is 0.0833333
The probability of differenet sum(5) of two sieves is 0.111111
The probability of differenet sum(6) of two sieves is 0.138889
The probability of differenet sum(7) of two sieves is 0.166667
The probability of differenet sum(8) of two sieves is 0.138889
The probability of differenet sum(9) of two sieves is 0.111111
The probability of differenet sum(10) of two sieves is 0.0833333
The probability of differenet sum(11) of two sieves is 0.0555556
The probability of differenet sum(12) of two sieves is 0.0277778
****************/