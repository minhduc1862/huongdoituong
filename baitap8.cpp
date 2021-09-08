#include<iostream>
using namespace std;

class sach
{
	private:
		int masach;
		string tensach;
		string tacgia;
		string cn;
		int namxb;
	public:
		sach()
		{
		}
		sach(int masach, string tensach, string tacgia, string cn, int namxb)
		{
			this->masach = masach;
			this->tensach = tensach;
			this->tacgia = tacgia;
			this->cn = cn;
			this->namxb = namxb;
		}
		~sach()
		{
		}
		void nhap();
		void hienthi();
		string getTensach()
		{
			return tensach;
		}
};

void sach::nhap()
{
	cout<<"Ma sach : ";
	cin>>masach;
	cout<<"Ten sach : ";
	fflush(stdin);
	getline(cin,tensach);
	cout<<"Tac gia : ";
	fflush(stdin);
	getline(cin,tacgia);
	cout<<"Chuyen nghanh : ";
	fflush(stdin);
	getline(cin,cn);
	cout<<"Nam xuat ban : ";
	cin>>namxb;
}

void sach::hienthi()
{
	cout<<"Ma sach : "<<masach<<endl;
	cout<<"Ten sach : "<<tensach<<endl;
	cout<<"Tac gia : "<<tacgia<<endl;
	cout<<"Chuyen nghanh : "<<cn<<endl;
	cout<<"Nam xuat ban : "<<namxb<<endl;
}

class nguoi
{
	private:
		string hoten;
		string diachi;
		int sdt;
	public:
		nguoi()
		{
		}
		nguoi(string hoten, string diachi, int sdt)
		{
			this->hoten = hoten;
			this->diachi = diachi;
			this->sdt = sdt;
		}
		~nguoi()
		{
		}
		void nhap();
		void hienthi();
};

void nguoi::nhap()
{
	cout<<"Ho ten : ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Dia chi : ";
	fflush(stdin);
	getline(cin,diachi);
	cout<<"So dien thoai : ";
	cin>>sdt;
}

void nguoi::hienthi()
{
	cout<<"Ho ten : "<<hoten<<endl;
	cout<<"Dia chi : "<<diachi<<endl;
	cout<<"So dien thoai : "<<sdt<<endl;
}

class bandoc : public nguoi
{
	private:
		int mabd;
		string loaibd;
		int ssm;
		sach ds[50];
	public:
		bandoc():nguoi()
		{
		}
		bandoc(string hoten, string diachi, int sdt, int mabd, string loaibd, int ssm, sach ds):nguoi(hoten,diachi,sdt)
		{
		}
		~bandoc()
		{
		}
		void nhap();
		void hienthi();
		int getMabd()
		{
			return mabd;
		}
		int getSsm()
		{
			return ssm;
		}
};

void bandoc::nhap()
{
	cout<<"Ma ban doc : ";
	cin>>mabd;
	cout<<"Loai ban doc : ";
	fflush(stdin);
	getline(cin,loaibd);
	cout<<"So sach muon : ";
	cin>>ssm;
	for(int i=0;i<ssm;i++)
	{
		cout<<"Nhap thong tin ve cuon sach thu "<<i+1<<" : \n";
		ds[i].nhap();
	}
}

void bandoc::hienthi()
{
	cout<<"\\n\n\nMa ban doc : "<<mabd<<endl;
	cout<<"Loai ban doc : "<<loaibd<<endl;
	cout<<"So sach muon : "<<ssm<<endl;
	for(int i=0;i<ssm;i++)
	{
		cout<<ds[i].getTensach()<<"\t";
	}
	cout<<"\n\n";
}

int main()
{
	sach *p = new sach();
	
	int m;
	cout<<"Nhap so sach hien co : ";
	cin>>m;
	
	cout<<"---------------NHAP THONG TIN CUON SACH----------------------";
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap thong tin cuon sach thu "<<i+1<<" :\n";
		p->nhap();
	}
	
	cout<<"---------------THONG TIN CUON SACH----------------------";
	for(int i=0;i<m;i++)
	{
		cout<<"\nThong tin cuon sach thu "<<i+1<<" :\n";
		p->hienthi();
	}
//	bandoc *q = new bandoc();
//	int n;
//	cout<<"Nhap so ban doc : ";
//	cin>>n;
//	
//	cout<<"----------------NHAP THONG TIN BAN DOC-----------------------";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\nNhap thong tin ban doc thu "<<i+1<<" :\n";
//		q->nhap();
//	}
//	
//	cout<<"-------------------THONG TIN BAN DOC-------------------------";
//	for(int i=0;i<m;i++)
//	{
//		cout<<"\nThong tin ban doc thu "<<i+1<<" :\n";
//		q->hienthi();
//	}
//	
//	int o;
//	cout<<"Nhap ma ban doc : ";
//	cin>>o;
//	
//	cout<<"----------------------SACH DA MUON---------------------------";
//	for(int i=0;i<n;i++)
//	{
//	}
}
