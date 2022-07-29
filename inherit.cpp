#include<iostream>
using namespace std;
class Base
{
public:
	int a;
protected:
	static int b;
private:
	int c;
};
int Base::b = 0;
class Son:public Base
{
public:
	void show();
};
void Son::show()
{
	cout << a << b << endl;
}


void main()
{
	Son s1;
	s1.a = 0;
	s1.show();
}


