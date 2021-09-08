#include<iostream>
using namespace std;

struct ngaysinh
{
	int ngay;
	int thang;
	int nam;
};

class nguoi
{
	private:
		string hoten;
		string gioitinh;
		ngaysinh ns;
	public:
		nguoi()
		{
		}
		~nguoi()
		{
		}
		void nhap();
		void hienthi();
		int tuoi()
		{
			return 2019-ns.nam;
		}
};

void nguoi::nhap()
{
	cout<<"Ho ten : ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Gioi tinh : ";
	fflush(stdin);
	getline(cin,gioitinh);
	cout<<"Ngay : ";
	cin>>ns.ngay;
	cout<<"Thang : ";
	cin>>ns.thang;
	cout<<"Nam : ";
	cin>>ns.nam;
}

void nguoi::hienthi()
{
	cout<<"Ho ten : "<<hoten<<endl;
	cout<<"Gioi tinh : "<<gioitinh<<endl;
	cout<<"Ngay sinh : "<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<endl;
}

class nhanvien : public nguoi
{
	private:
		float hsthamnien;
		float mucluong;
		float anca;
	public:
		nhanvien():nguoi()
		{
		}
		~nhanvien()
		{
		}
		void nhap();
		void hienthi();
		bool nghihuu();
		float luong();
};

void nhanvien::nhap()
{
	nguoi::nhap();
	cout<<"He so tham nien : ";
	cin>>hsthamnien;
	cout<<"Muc luong : ";
	cin>>mucluong;
	if(nghihuu() == false)
	{
		cout<<"Tien an ca : ";
		cin>>anca;
	}
}

void nhanvien::hienthi()
{
	nguoi::hienthi();
	cout<<"He so tham nien : "<<hsthamnien<<endl;
	cout<<"Muc luong : "<<mucluong<<endl;
	if(nghihuu() == false)
	{
		cout<<"Tien an ca : "<<anca<<endl;
	}
}

bool nhanvien::nghihuu()
{
	if(tuoi() >= 60)
		return true;
	return false;
}

float nhanvien::luong()
{
	if(nghihuu())
		return (0.75*mucluong*hsthamnien);
	return (mucluong*hsthamnien*anca);
}

int main()
{
	nhanvien nv[50];
	int n;
	cout<<"Nhap so nhan vien : ";
	cin>>n;
	
	cout<<"\n\n--------------NHAP THONG TIN NHAN VIEN-----------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin nhan vien thu "<<i+1<<" :\n";
		nv[i].nhap();
	}
	
	cout<<"-----------------THONG TIN NHAN VIEN--------------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin nhan vien thu "<<i+1<<" :\n";
		nv[i].hienthi();
		int y = nv[i].luong();
		cout<<"Luong : "<<(int)nv[i].luong()<<endl;
	}
	
	cout<<"\n------------NHAN VIEN DA DEN TUOI NGHI HUU----------------";
	for(int i=0;i<n;i++)
	{
		if(nv[i].nghihuu() == true)
		{
			cout<<"\nNhan vien da den tuoi nghi huu thu "<<i+1<<" :\n";
			nv[i].hienthi();
		}
	}
}
