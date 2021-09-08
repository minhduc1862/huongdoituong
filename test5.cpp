#include<iostream>
using namespace std;

class sp
{
	public:
		double a;
		double b;
	public:
		sp operator-();
};

sp sp::operator-()
{
	sp u;
	u.a = - this->a;
	u.b = - this->b;
	return u;
}

int main()
{
	sp u,v;
	u = -v;
	cout<<"phan thuc u : "<<u.a;
	cout<<"\nphan ao u : "<<u.b;
	cout<<"\nphan thuc v : "<<v.a;
	cout<<"\nphan ao v : "<<v.b;
}
