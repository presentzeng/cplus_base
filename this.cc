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
	int ret2()
	{
		cout << this->ptr << endl;;
	}
	static int ret3()
	{ cout << "static func "  <<endl; }
private:
	int  ptr;
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
	ptr = obj.ptr;
}
Line::Line(int val)
{ 
	cout << "constrcut " << endl;
	ptr = val;
}

Line::~Line()
{
	cout << "delete " << endl;
}
int main()
{
	Line line(10);	
	line.ret2(); /* this */

	Line * linep = &line;
	linep->ret2(); /* class pointer */

	Line::ret3();
	return 0;
}
