#include<iostream>
using namespace std;

class color
{
	private:
		string mamau;
		string tenmau;
	public:
		color()
		{
		}
		color(string mamau, string tenmau)
		{
			this->mamau = mamau;
			this->tenmau = tenmau;
		}
		~color()
		{
		}
		void nhap();
		void hienthi();
		string getTenmau()
		{
			return tenmau;
		}
};

void color::nhap()
{
	cout<<"Ma mau : ";
	fflush(stdin);
	getline(cin,mamau);
	cout<<"Ten mau : ";
	fflush(stdin);
	getline(cin,tenmau);
}

void color::hienthi()
{
	cout<<"Ma mau : "<<mamau<<endl;
	cout<<"Ten mau : "<<tenmau<<endl;
}

class point
{
	private:
		int x;
		int y;
	public:
		point()
		{
		}
		point(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		~point()
		{
		}
		void nhap();
		void hienthi();
		bool CheoChinh();
};

void point::nhap()
{
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
}

void point::hienthi()
{
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}

bool point::CheoChinh()
{
	if(x == y)
	{
		return true;
	}
	return false;
}

class pixel : public color, public point
{
	public:
		pixel()
		{
		}
		pixel(string mamau, string tenmau):color(mamau, tenmau)
		{
		}
		pixel(int x, int y):point(x,y)
		{
		}
		pixel(string mamau, string tenmau, int x, int y):color(mamau,tenmau),point(x,y)
		{
		}
		~pixel()
		{
		}
		void nhap();
		void hienthi();
		bool kiemtra();
};

void pixel::nhap()
{
	color::nhap();
	point::nhap();
}

void pixel::hienthi()
{
	color::hienthi();
	point::hienthi();
}

bool pixel::kiemtra()
{
	if(CheoChinh() == true && getTenmau() == "Xanh")
	{
		return true;
	}
	return false;
}

int main()
{
//	pixel p("1","xanh",2,2);
//	p.hienthi();
	pixel p[50];
	int n;
	cout<<"Nhap so pixel : ";
	cin>>n;
	
	cout<<"---------------NHAP THONG TIN CAC PIXEL--------------------\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin pixel thu "<<i+1<<" :\n";
		p[i].nhap();
	}
	
	cout<<"\n--------------HIEN THI THONG TIN CAC PIXEL------------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin pixel thu "<<i+1<<" :\n";
		p[i].hienthi();
	}
	
	cout<<"\n-----------CAC PIXEL THUOC DUONG CHEO CHINH VA CO MAU XANH--------------\n";
	for(int i=0;i<n;i++)
	{
		if(p[i].kiemtra() == true)
		{
			cout<<"\nNhap thong tin pixel thu "<<i+1<<" :\n";
			p[i].hienthi();
		}
	}
}
