#include <iostream>
using namespace std;
int func()
{
	short int i;
	short unsigned int j;
	i = 50000;
	j = i;
	cout << i << " " << j;
	return 0;
}
int func1()
{
	int a = 1;	
	int & b = a;
	a = 2;
	cout << b << endl;
}
int func2(int & a)	
{
	a = 99;
}

int main()
{
	int b = 10;
	func2(b);
	cout << b << endl;
}

