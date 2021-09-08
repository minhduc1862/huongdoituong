#include<iostream>
using namespace std;

class dagiac
{
	private:
		int sodinh;
		int socanh;
		string mau;
	public:
		dagiac()
		{
		}
		dagiac(int sd, int sc, string m)
		{
			sodinh = sd;
			socanh = sc;
			mau = m;
		}
		~dagiac()
		{
		}
		void nhap();
		void hienthi();
		string getmau();
};

void dagiac::nhap()
{
	cout<<"Nhap so dinh : ";
	cin>>sodinh;
	cout<<"Nhap so canh : ";
	cin>>socanh;
	cout<<"Nhap mau : ";
	fflush(stdin);
	getline(cin,mau);
}

void dagiac::hienthi()
{
	cout<<"So dinh : "<<sodinh<<endl;
	cout<<"So canh : "<<socanh<<endl;
	cout<<"Mau:"<<mau<<endl;
}

string dagiac::getmau()
{
	return mau;
}

class tamgiac : public dagiac
{
	private:
		string loai;
	public:
		// ham thiet lap khong
		tamgiac():dagiac()
		{
		}
		
		tamgiac(int sd, int sc, string m):dagiac(sd,sc,m)
		{
		}
		
		tamgiac(int sd, int sc, string m, string loai):dagiac(sd,sc,m)
		{
			this->loai = loai;
		}
		~tamgiac()
		{
		}
		void nhap();
		void hienthi();
		string getLoai()
		{
			return loai;
		}
};

void tamgiac::nhap()
{
	dagiac::nhap();
	cout<<"Nhap loai tam giac : ";
	fflush(stdin);
	getline(cin,loai);
}

void tamgiac::hienthi()
{
	dagiac::hienthi();
	cout<<"Loai tam giac : "<<loai<<endl;
}

int main()
{
	// a;
//	tamgiac *p = new tamgiac(3, 3, "xanh");
//	p->dagiac::hienthi();
	
	// b
	tamgiac tg[100];
	int n;
	cout<<"Nhap n=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap tam giac thu "<<i+1<<" la:\n";
		tg[i].nhap();
	}
	
	cout<<"--------------HIEN THI TAM GIAC------------------------\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Tam giac thu "<<i+1<<" la:\n";
		tg[i].hienthi();
	}
//	1 != "1"
	// c;
	cout<<"---------------TAM GIAC DEU VA CO MAU XANH------------------\n";
	for(int i=0;i<n;i++)
	{
		if(tg[i].getLoai() == "tam giac deu" && tg[i].getmau() == "xanh")
		{
			cout<<"Tam giac thu "<<i+1<<" la:\n";
			tg[i].hienthi();
		}
	}
}
