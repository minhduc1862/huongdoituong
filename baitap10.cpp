#include<iostream>
using namespace std;

class vandongvien
{
	private:
		string hoten;
		int tuoi;
		string monthidau;
		float cannang;
		float chieucao;
	public:
		vandongvien()
		{
		}
		vandongvien(string hoten, int tuoi, string monthidau, float cannang, float chieucao)
		{
			this->hoten = hoten;
			this->tuoi = tuoi;
			this->monthidau = monthidau;
			this->cannang = cannang;
			this->chieucao = chieucao;
		}
		~vandongvien()
		{
		}
		friend istream& operator >>(istream &nhap, vandongvien &vdv);
		friend ostream& operator <<(ostream &hienthi, vandongvien vdv);
		bool operator >(vandongvien b);
};

istream& operator >>(istream &nhap, vandongvien &vdv)
{
	cout<<"Ho ten : ";
	fflush(stdin);
	getline(nhap,vdv.hoten);
	cout<<"Tuoi : ";
	nhap>>vdv.tuoi;
	cout<<"Mon thi dau : ";
	fflush(stdin);
	getline(nhap,vdv.monthidau);
	cout<<"Can nang : ";
	nhap>>vdv.cannang;
	cout<<"Chieu cao : ";
	nhap>>vdv.chieucao;
	return nhap;
}

ostream& operator <<(ostream &hienthi, vandongvien vdv)
{
	hienthi<<"Ho ten : "<<vdv.hoten<<endl;
	hienthi<<"Tuoi : "<<vdv.tuoi<<endl;
	hienthi<<"Mon thi dau : "<<vdv.monthidau<<endl;
	hienthi<<"Can nang : "<<vdv.cannang<<endl;
	hienthi<<"Chieu cao : "<<vdv.chieucao<<endl;
	return hienthi;
}

bool vandongvien::operator >(vandongvien b)
{
	if(this->chieucao > b.chieucao)
	{
		return true;
	}
	else if(this->chieucao == b.chieucao)
	{
		if(this->cannang > b.cannang)
		{
			return true;
		}
	}
	return false;
}

void hoanvi(vandongvien &c, vandongvien &d)
{
	vandongvien tg = c;
	c = d;
	d = tg;
}

void sapxep(vandongvien ptr[100],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ptr[i].operator >(ptr[j]))
			{
				hoanvi(ptr[i],ptr[j]);
			}
		}
	}
}

int main()
{
	vandongvien p("Duc",19,"Bong da",67.5,180);
	cout<<p;
	
	cout<<"\n\n\n";
	
	vandongvien *ptr;
	ptr = new vandongvien[100];
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	cout<<"-----------NHAP THONG TIN CAC VAN DONG VIEN---------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin van dong vien thu "<<i+1<<" :\n";
		cin>>ptr[i];
	}
	
	cout<<"\n-----------THONG TIN CAC VAN DONG VIEN-------------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin van dong vien thu "<<i+1<<" :\n";
		cout<<ptr[i];
	}
	
	sapxep(ptr,n);
	cout<<"\n-----------SAP XEP-------------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin van dong vien thu "<<i+1<<" :\n";
		cout<<ptr[i];
	}
}
