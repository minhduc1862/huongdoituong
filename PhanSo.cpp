#include<iostream>
using namespace std;

class phanso
{
	private:
		int tu;
		int mau;
	public:
		phanso()
		{
		}
		
		phanso(int t, int m)
		{
			this->tu = t;
			this->mau = m;
		}
		
		~phanso()
		{
		}
		
		friend istream& operator >> (istream &nhap, phanso &ps);
		friend ostream& operator << (ostream &hienthi, phanso ps);
		phanso operator +(phanso b);
		phanso operator -(phanso b);
		phanso operator *(phanso b);
//		void nhap();
//		void hienthi();
		
};

istream& operator >> (istream &nhap, phanso &ps)
{
	cout<<"Nhap tu:";
	nhap >> ps.tu;
	cout<<"Nhap mau:";
	nhap >> ps.mau;
	return nhap;
}

ostream& operator << (ostream &hienthi, phanso ps)
{
	hienthi << "Phan So:" << ps.tu <<"/"<<ps.mau<<endl;
	return hienthi;
}

phanso phanso::operator +(phanso b)
{
	phanso c;
	c.tu = this->tu * b.mau + this->mau * b.tu;
	c.mau = this->mau * b.mau;
	return c;
}

phanso phanso::operator -(phanso b)
{
	phanso c;
	c.tu = this->tu * b.mau - this->mau * b.tu;
	c.mau = this->mau * b.mau;
	return c;
}

phanso phanso::operator *(phanso b)
{
	phanso c;
	c.tu = this->tu * b.tu;
	c.mau = this->mau * b.mau;
	return c;
}
//void phanso::nhap()
//{
//	cout<<"Nhap tu so:";
//	cin>>tu;
//	cout<<"Nhap mau so:";
//	cin>>mau;
//}
//
//void phanso::hienthi()
//{
//	cout<<"Phan so:"<<tu<<"/"<<mau<<endl;
//}

int main()
{
	phanso ps[100];
	int n;
	cout<<"Nhap n=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Phan so thu "<<i+1<<" la:\n";
		cin >> ps[i];
	}
	
	cout<<"-----------HIEN THI---------------\n";
	for(int i=0;i<n;i++)
	{
		cout << ps[i];
	}
	
	cout<<"---------TINH TONG--------\n";
	phanso c(0,1);
//	phanso a(1,2);
//	phanso b(1,2);
//	c = a + b;
	
	for(int i=0;i<n;i++)
	{
		c = c + ps[i];
	}
	cout << c;
	
	cout<<"---------TINH HIEU--------\n";
	phanso d(0,1);
	for(int i=0;i<n;i++)
	{
		if(i == 0)
		{
			d = ps[i];	
		}
		else
		{
			d = d - ps[i];
		}
	}
	cout << d;
	
	cout<<"---------TINH TICH--------\n";
	phanso d(0,1);
	for(int i=0;i<n;i++)
	{
		d = d * ps[i];
	}
	cout << d;
}
