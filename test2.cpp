#include<iostream>
using namespace std;

class A
{
	public:
		int publicMethod;
};

class B : private A
{	
};

int main()
{
	B b;
	cout<<b.publicMethod;
}
