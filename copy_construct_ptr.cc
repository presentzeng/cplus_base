#include <iostream>
using namespace std;

class Line
{
public:
	Line(int val);
	Line(const Line &obj);/* copy construct */
	~Line();
	int ret();
private:
	int * ptr;
};

int Line::ret()
{
	cout << *ptr << endl;
}

Line::Line(int val)
{ 
	cout << "constrcut " << endl;
	ptr = new int;
	*ptr = val;
}
Line::Line(const Line &obj)
{
	cout << "copy construct " << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

Line::~Line()
{
	cout << "delete " << endl;
	delete ptr;
}
int main()
{
	Line line(10);	
	line.ret();
	Line line2(line);
	line2.ret();
	Line line3 = line2;
	line3.ret();
}
