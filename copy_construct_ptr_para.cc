#include <iostream>
using namespace std;

class Line
{
public:
	Line(int val);
	Line();
	Line(const Line&);
	~Line();
	friend int ret(Line line);
private:
	int * ptr;
};

int ret(Line line)
{
	/*cout << *(line.ptr) << endl;*/
}

Line::Line()
{ cout << "two" << endl; }
Line::Line(const Line &obj)
{
	cout << "copy construct " << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}
Line::Line(int val)
{ 
	cout << "constrcut " << endl;
	ptr = new int;
	*ptr = val;
}

Line::~Line()
{
	cout << "delete " << endl;
	delete ptr;
}
int main()
{
	Line line(10);	
	ret(line);
	return 0;
}
