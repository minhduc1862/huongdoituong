#include<iostream>
using namespace std;

class monhoc
{
	private:
		int mamh;
		string tenmh;
		float diemtp;
		float diemthi;
		int sotc;
	public:
		monhoc()
		{
		}
		~monhoc()
		{
		}
		float diemtb()
		{
			return (diemtp*0.3) + (diemthi*0.7);
		}
		int getSotc()
		{
			return sotc;
		}
		void nhap();
		void hienthi();
};

void monhoc::nhap()
{
	cout<<"Ma mon hoc : ";
	cin>>mamh;
	cout<<"Ten mon hoc : ";
	fflush(stdin);
	getline(cin,tenmh);
	cout<<"Diem thanh phan : ";
	cin>>diemtp;
	cout<<"Diem thi : ";
	cin>>diemthi;
	cout<<"So tin chi : ";
	cin>>sotc;
}

void monhoc::hienthi()
{
	cout<<"Ma mon hoc : "<<mamh<<endl;
	cout<<"Ten mon hoc : "<<tenmh<<endl;
	cout<<"Diem thanh phan : "<<diemtp<<endl;
	cout<<"Diem thi : "<<diemthi<<endl;
	cout<<"So tin chi : "<<sotc<<endl;
}

class sinhvien
{
	private:
		string masv;
		string tensv;
		int somh;
		monhoc dsmh[50];
	public:
		sinhvien()
		{
		}
		~sinhvien()
		{
		}
		
		float diemtk();
		void nhap();
		void hienthi();
};

void sinhvien::nhap()
{
	cout<<"Ma sinh vien : ";
	fflush(stdin);
	getline(cin,masv);
	cout<<"Ten sinh vien : ";
	fflush(stdin);
	getline(cin,tensv);
	cout<<"So mon hoc : ";
	cin>>somh;
	
	for(int i=0;i<somh;i++)
	{
		cout<<"Nhap thong tin mon hoc thu "<<i+1<<" :\n";
		dsmh[i].nhap();
	}
}

void sinhvien::hienthi()
{
	cout<<"Ma sinh vien : "<<masv<<endl;
	cout<<"Ten sinh vien : "<<tensv<<endl;
	cout<<"So mon hoc : "<<somh<<endl;
	
	for(int i=0;i<somh;i++)
	{
		cout<<"Thong tin mon hoc thu "<<i+1<<" :\n";
		dsmh[i].hienthi();
	}
}

float sinhvien::diemtk()
{
	float tong=0;
	int tongsotc=0;
	for(int i=0;i<somh;i++)
	{
		tong += (dsmh[i].diemtb()*dsmh[i].getSotc());
		tongsotc += dsmh[i].getSotc();
	}
	return tong / tongsotc;
}

int main()
{
	sinhvien sv[50];
	int n;
	cout<<"Nhap so sinh vien : ";
	cin>>n;
	cout<<"\n\n-------------NHAP THONG TIN SINH VIEN--------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin sinh vien thu "<<i+1<<" :\n";
		sv[i].nhap();
	}
	
	cout<<"\n\n-------------THONG TIN SINH VIEN--------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin sinh vien thu "<<i+1<<" :\n";
		sv[i].hienthi();
		cout<<"Diem tong ket : "<<sv[i].diemtk()<<endl;
	}
	
	cout<<"Sinh vien duoc hoc bong :\n";
	for(int i=0;i<n;i++)
	{
		if(sv[i].diemtk()>=8.0)
		{
			sv[i].hienthi();
			cout<<"Diem tong ket : "<<sv[i].diemtk()<<endl;
		}
	}
}
