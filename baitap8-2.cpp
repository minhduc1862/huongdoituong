#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct date
{
	int ngay;
	int thang;
	int nam;
};

class sach
{
	private:
		int masach;
		char tensach[30];
		string tacgia;
		string chuyennganh;
		date namxb;
	public:
		sach()
		{
		}
		sach(int masach, const char tensach[30], string tacgia, string chuyennganh, int ngay,int thang,int nam)
		{
			this->masach = masach;
			strcpy(this->tensach,tensach);
			this->tacgia = tacgia;
			this->chuyennganh = chuyennganh;
			this->namxb.ngay = ngay;
			this->namxb.thang = thang;
			this->namxb.nam = nam; 
		}
		~sach()
		{
		}
		
		void nhap();
		void hienthi();
	
};

void sach::nhap()
{
	cout<<"Nhap ma sach:";
	cin>>this->masach;
	cout<<"Nhap ten sach:";
	fflush(stdin);
	gets(this->tensach);
	cout<<"Nhap tac gia:";
	fflush(stdin);
	getline(cin, this->tacgia);
	cout<<"Nhap chuyen nganh:";
	fflush(stdin);
	getline(cin, this->chuyennganh);
	cout<<"Nhap ngay:";
	cin>>this->namxb.ngay;
	cout<<"Nhap thang:";
	cin>>this->namxb.thang;
	cout<<"Nhap nam:";
	cin>>this->namxb.nam;	

}

void sach::hienthi()
{
	cout<<"Ma sach:"<<this->masach<<endl;
	cout<<"Ten sach:"<<this->tensach<<endl;
	cout<<"Tac gia:"<<this->tacgia<<endl;
	cout<<"Chuyen nganh:"<<this->chuyennganh<<endl;
	cout<<"Nam xuat ban:"<<this->namxb.ngay<<"/"<<this->namxb.thang<<"/"<<this->namxb.nam<<endl;
}

class nguoi
{
	private:
		string hoten;
		string diachi;
		string sdt;
	public:
		nguoi()
		{
		}
		nguoi(string hoten, string diachi, string sdt):hoten(hoten),diachi(diachi),sdt(sdt)
		{
		}
		~nguoi()
		{
			cout<<"Ham huy cua class nguoi";
		}
		void nhap();
		void hienthi();
};

void nguoi::nhap()
{
	cout<<"Nhap ho ten:";
	fflush(stdin);
	getline(cin, this->hoten);
	
	cout<<"Nhap dia chi:";
	fflush(stdin);
	getline(cin, this->diachi);
	
	cout<<"Nhap so dien thoai:";
	fflush(stdin);
	getline(cin, this->sdt);
	
}

void nguoi::hienthi()
{
	cout<<"Ho ten:"<<this->hoten<<endl;
	cout<<"Dia chi:"<<this->diachi<<endl;
	cout<<"So dien thoai:"<<this->sdt<<endl;
}


class bandoc : public nguoi
{
	private:
		int mabd;
		string loaibd;
		int sosach;
		sach *s;
	public:
		bandoc():nguoi()
		{
		}
		
		bandoc(string hoten, string diachi,string sdt,int mabd, string loaibd, int sosach, sach *s):nguoi(hoten, diachi, sdt)
		{
			this->mabd = mabd;
			this->loaibd = loaibd;
			this->sosach = sosach;
			this->s = s;
		}
		~bandoc()
		{
		}
		void nhap();
		void hienthi();
};


void bandoc::nhap()
{
	nguoi::nhap();
	cout<<"Nhap ma ban doc:";
	cin>>this->mabd;
	cout<<"Nhap loai ban doc:";
	fflush(stdin);
	getline(cin, this->loaibd);
	
	cout<<endl<<"Nhap so sach da muon:";
	cin>>this->sosach;
	//cap phat
	s = new sach[sosach];
	for(int i=0;i<sosach;i++)
	{
		cout<<"Nhap cuon sach thu "<<i+1<<" la:\n";
		s[i].nhap();
	}
}

void bandoc::hienthi()
{
	nguoi::hienthi();
	cout<<"Ma ban doc:"<<this->mabd<<endl;
	cout<<"Loai ban doc:"<<this->loaibd<<endl;
	cout<<endl<<"So sach da muon:"<<this->sosach<<endl;
	for(int i=0;i<sosach;i++)
	{
		cout<<endl;
		cout<<"Cuon sach thu "<<i+1<<" da muon la:\n";
		s[i].hienthi();
	}	
}

int main()
{
	bandoc *bd;
	bd = new bandoc[100];
	int n;
	cout<<"Nhap n=";
	cin>>n;
	cout<<"-----------------------------NHAP DANH SACH BAN DOC---------------------------\n";
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"Nhap ban doc thu " <<i+1<<" la:\n";
		bd[i].nhap();
	}
	cout<<endl;
	cout<<"-----------------------------DANH SACH BAN DOC----------------------------------\n";

	for(int i=0;i<n;i++)
	{
		cout<<"Ban doc thu "<< i+1<<" la:\n";
		bd[i].hienthi();
	}
}

