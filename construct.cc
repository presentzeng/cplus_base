#include <iostream>
using namespace std;

class Box
{
public:
	double len;
	double bro;
	double hgt;

	Box()
	{ cout << "Box construct" << endl; }
	~Box()
	{ cout << "Box destruct" << endl; }
	int setlen();

};
int Box::setlen()
{
	len = -1;
}
int main()
{
	Box box;
}
