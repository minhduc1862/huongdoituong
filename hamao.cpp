#include<iostream>
using namespace std;

class Base
{
	private:
		int x;
	public:
		virtual void setvalue(int i)
		{
			x=i;
			cout<<"\n Lop co so;";
		}
		virtual int getvalue()
		{
			return x;
		}
};

class Derived:public Base
{
	private:
		int y;
	public:
		void setvalue(int i)
		{
			y=i;
			cout<<"\n Lop dan xuat";
		}
		int getvalue()
		{
			return y;
		}
};

int main()
{
	Base *p, o1;

	Derived obj, *p1;

	p=&obj; // con tr? l?p co s? tr? d?n d?i tu?ng c?a l?p d?n xu?t

	p->setvalue(5); //nh?n giá tr? c?a l?p d?n xu?t

	p=&o1; //tr? d?n con tr? trong cùng l?p co s?

	p->setvalue(5); //nh?n giá tr? c?a l?p co s?

	cin.get();
}
