
// Source : Algorithms 4th Edition
//Robert Sedgewick and Kevin Wayne
// Author : ring04w
// Date   : 2015-03-12

//Decimal  change to binary

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string num2string(int number)
{
	stringstream ss;
	ss<<number;
	return ss.str();
}

/********************************
string string2num(string s)
{
	int mumber;
	stringstream ss(s);
	ss>>number;
	return number;
}
***********************************/

int main()
{

	int n;
	int N;
	string s = "";
	cout<<"please input N"<<endl;
	cin>>N;
	for(n = N; n > 0; n = n / 2){
		s =  num2string(n%2) + s;
	}
	cout<<s<<endl;
	return 0;
}

