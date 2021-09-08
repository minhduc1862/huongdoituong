#include<iostream>
using namespace std;

class thisinh
{
	protected:
		string sbd;
		string hoten;
		string diachi;
		string dienut;
	public:
		thisinh()
		{
		}
		thisinh(string sbd, string hoten, string diachi, string dienut)
		{
			this->sbd = sbd;
			this->hoten = hoten;
			this->diachi = diachi;
			this->dienut = dienut;
		}
		~thisinh()
		{
		}
};

class thisinhkhoiA : public thisinh
{
	private:
		float toan;
		float ly;
		float hoa;
	public:
		thisinhkhoiA():thisinh()
		{
		}
		thisinhkhoiA(string sbd, string hoten, string diachi, string dienut, float toan, float ly, float hoa):thisinh(sbd, hoten, diachi, dienut)
		{
			this->toan = toan;
			this->ly = ly;
			this->hoa = hoa;
		}
		~thisinhkhoiA()
		{
		}
		void nhap();
		void hienthi();
		
		float dtb()
		{
			return (toan + ly + hoa)/3;
		}
		string getDiachi()
		{
			return diachi;
		}
		friend void sapxep(int n, thisinhkhoiA a[50]);
};

void thisinhkhoiA::nhap()
{
	cout<<"So bao danh : ";
	fflush(stdin);
	getline(cin,sbd);
	cout<<"Ho ten : ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Dia chi : ";
	fflush(stdin);
	getline(cin,diachi);
	cout<<"Dien uu tien : ";
	fflush(stdin);
	getline(cin,dienut);
	cout<<"Diem toan : ";
	cin>>toan;
	cout<<"Diem ly : ";
	cin>>ly;
	cout<<"Diem hoa : ";
	cin>>hoa;
}

void thisinhkhoiA::hienthi()
{
	cout<<"So bao danh : "<<sbd<<endl;
	cout<<"Ho ten : "<<hoten<<endl;
	cout<<"Dia chi : "<<diachi<<endl;
	cout<<"Dien uu tien : "<<dienut<<endl;
	cout<<"Diem toan : "<<toan<<endl;
	cout<<"Diem ly : "<<ly<<endl;
	cout<<"Diem hoa : "<<hoa<<endl;
}

void doicho(thisinhkhoiA &a,thisinhkhoiA &b)
{
	thisinhkhoiA tg = a;
	a = b;
	b = tg;
}

void sapxep(int n,thisinhkhoiA a[50])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].toan > a[j].toan)
			{
				doicho(a[i],a[j]);
			}
		}
	}
	
	cout<<"\nSap xep : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin thi sinh khoi A thu "<<i+1<<" :\n";
		a[i].hienthi();
		cout<<"Diem trung binh : "<<a[i].dtb()<<endl;
	}
}

void maxdtb(int n, thisinhkhoiA a[50])
{
	float max = a[0].dtb();
	for(int i=1;i<n;i++)
	{
		if(max < a[i].dtb())
		{
			max = a[i].dtb();
		}
	}
	
	cout<<"\nThi sinh co diem trung binh cao nhat la : ";
	for(int i=0;i<n;i++)
	{
		if(max == a[i].dtb())
		{
			a[i].hienthi();
			cout<<"Diem trung binh : "<<a[i].dtb()<<endl;
		}
	}
}

int main()
{
	thisinhkhoiA ts[50];
	int n;
	cout<<"Nhap so thi sinh : ";
	cin>>n;
	cout<<"--------------NHAP THONG TIN THI SINH KHOI A--------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin thi sinh khoi A thu "<<i+1<<" :\n";
		ts[i].nhap();
	}
	
	cout<<"-----------------THONG TIN THI SINH KHOI A------------------";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin thi sinh khoi A thu "<<i+1<<" :\n";
		ts[i].hienthi();
		cout<<"Diem trung binh : "<<ts[i].dtb()<<endl;
	}
	
//	cout<<"\nNhung thi sinh que Ha Noi : \n";
//	for(int i=0;i<n;i++)
//	{
//		if(ts[i].getDiachi() == "Ha Noi")
//		{
//			ts[i].hienthi();
//			cout<<"Diem trung binh : "<<ts[i].dtb()<<endl;
//		}
//	}
	
	sapxep(n,ts);
	
//	maxdtb(n,ts);
}
