#include<iostream>
using namespace std;

class vemaybay
{
	private:
		int mave;
		string loaive;
		int giave;
		string diemdi;
		string diemden;
	public:
		vemaybay()
		{
		}
		~vemaybay()
		{
		}
		void set();
		void get();
		string getLoaive()
		{
			return loaive;
		}
};

void vemaybay::set()
{
	cout<<"Ma ve : ";
	cin>>mave;
	cout<<"Loai ve : ";
	fflush(stdin);
	getline(cin,loaive);
	cout<<"Gia ve : ";
	cin>>giave;
	cout<<"Diem di : ";
	fflush(stdin);
	getline(cin,diemdi);
	cout<<"Diem den : ";
	fflush(stdin);
	getline(cin,diemden);
}

void vemaybay::get()
{
	cout<<"Ma ve : "<<mave<<endl;
	cout<<"Loai ve : "<<loaive<<endl;
	cout<<"Gia ve : "<<giave<<endl;
	cout<<"Diem di : "<<diemdi<<endl;
	cout<<"Diem den : "<<diemden<<endl;
}

class hanhkhach
{
	private:
		int makh;
		string tenkh;
		int slve;
		vemaybay ve[100];
	public:
		hanhkhach()
		{
		}
		~hanhkhach()
		{
		}
		void set();
		void get();
		string getTenkh()
		{
			return tenkh;
		}
		bool kiemtra();
};

void hanhkhach::set()
{
	cout<<"Ma hanh khach : ";
	cin>>makh;
	cout<<"Ten hanh khach : ";
	fflush(stdin);
	getline(cin,tenkh);
	cout<<"So luong ve da mua : ";
	cin>>slve;
	for(int i=0;i<slve;i++)
	{
		cout<<"Nhap thong tin ve may bay thu "<<i+1<<" : \n";
		ve[i].set();
	}
}

void hanhkhach::get()
{
	cout<<"Ma hanh khach : "<<makh<<endl;
	cout<<"Ten hanh khach : "<<tenkh<<endl;
	cout<<"So luong ve da mua : "<<slve<<endl;
	cout<<"Danh sach cac ve da mua : ";
	for(int i=0;i<slve;i++)
	{
		cout<<ve[i].getLoaive()<<"\t";
	}
	cout<<"\n\n";
}

bool hanhkhach::kiemtra()
{
	int dem=0;
	for(int i=0;i<slve;i++)
	{
		if( ve[i].getLoaive() == "hang thuong gia")
		{
			dem++;
		}
	}
	if(dem >= 2)
	{
		return true;
	}
	return false;
}

int main()
{
	hanhkhach kh[100];
	int n;
	cout<<"Nhap so hanh khach : ";
	cin>>n;
	
	cout<<"\n-----------NHAP THONG TIN HANH KHACH-----------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin hanh khach thu "<<i+1<<" la:\n";
		kh[i].set();
	}
	
	cout<<"\n\n------------THONG TIN HANH KHACH-------------\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Thong tin hanh khach thu "<<i+1<<" la:\n";
		kh[i].get();
	}
	
	cout<<"Cac khach vip la : ";
	for(int i=0;i<n;i++)
	{
		if(kh[i].kiemtra() == true)
		{
			cout<<kh[i].getTenkh()<<"\t";
		}
	}
}
