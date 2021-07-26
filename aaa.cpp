#include<iostream>
using namespace std;
int nhap(int &a, int &b);

int main()
{
	int i;
	
	int &a= i;
	int a;
	int n;
	nhap(&a,&n);
//	int i=2,j=3;
//	int &r=i;
//	i++;
//	cout<<"r(i++) = "<<r<<endl;
//	r=6;
//	cout<<"i(r=6) = "<<i<<endl;
//	int &p=j;
//	p=i;
//	cout<<"i(p=i) = "<<i<<endl;
//	cout<<"p(p=i) = "<<p<<endl;
//	cout<<"j(p=i) = "<<j<<endl;
//	cout<<"r(p=i) = "<<r<<endl;
}
