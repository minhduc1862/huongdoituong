#include<iostream>
using namespace std;

class thisinh
{
	private:
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
		void nhap();
		void hienthi();
		virtual float diemtb();
		string getDiachi()
		{
			return diachi;
		}
//		bool operator >(thisinh bc);
};

void thisinh::nhap()
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
}

void thisinh::hienthi()
{
	cout<<"So bao danh : "<<sbd<<endl;
	cout<<"Ho ten : "<<hoten<<endl;
	cout<<"Dia chi : "<<diachi<<endl;
	cout<<"Dien uu tien : "<<dienut<<endl;
}

//bool thisinh::operator >(thisinh b)
//{
//	if(this->diemtb() > b.diemtb())
//	{
//		return true;
//	}
//	return false;
//}

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
		thisinhkhoiA(string sbd, string hoten, string diachi, string dienut, float toan,float ly, float hoa):thisinh(sbd,hoten,diachi,dienut)
		{
			this->toan = toan;
			this->ly = ly;
			this->hoa = hoa;
		}
		~thisinhkhoiA()
		{
		}
		friend istream& operator >>(istream &nhap,thisinhkhoiA &ts);
		friend ostream& operator <<(ostream &hienthi,thisinhkhoiA ts);
		
		float diemtb()
		{
			return (toan+ly+hoa)/3;
		}	
};

istream& operator>>(istream &nhap,thisinhkhoiA &ts)
{
//	thisinh::nhap();
	ts.nhap();
	cout<<"Diem toan : ";
	nhap>>ts.toan;
	cout<<"Diem ly : ";
	nhap>>ts.ly;
	cout<<"Diem hoa : ";
	nhap>>ts.hoa;
	return nhap;
}

ostream& operator <<(ostream &hienthi,thisinhkhoiA ts)
{
//	thisinh::hienthi();
	ts.hienthi();
	hienthi<<"Diem toan : "<<ts.toan<<endl;
	hienthi<<"Diem ly : "<<ts.ly<<endl;
	hienthi<<"Diem hoa : "<<ts.hoa<<endl;
	return hienthi;
}

//void hoanvi(thisinh &c, thisinh &d)
//{
//	thisinh tg = c;
//	c = d;
//	d = tg;
//}

//void sapxep(thisinh ptr[100],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(ptr[i].operator >(ptr[j]))
//			{
//				hoanvi(ptr[i],ptr[j]);
//			}
//		}
//	}
//}

int main()
{
//	int n;
//	cout<<"Nhap so thi sinh khoi A : ";
//	cin>>n;
//	thisinhkhoiA *p = new thisinhkhoiA[100];
//	
//	cout<<"\n\n----------------NHAP THONG TIN THI SINH KHOI A---------------------";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\nNhap thong tin thi sinh thu "<<i+1<<" :\n";
//		cin>>p[i];
//	}
//	
//	cout<<"----------------THONG TIN THI SINH KHOI A------------------------";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\nThong tin thi sinh thu "<<i+1<<" :\n";
//		cout<<p[i];
//		cout<<"Diem trung binh : "<<p[i].diemtb()<<endl;
//	}
	
//	cout<<"----------------NHUNG THI SINH QUE HA NOI--------------------\n";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\n";
//		if(p[i].getDiachi() == "Ha Noi")
//		{
//			cout<<p[i];
//			cout<<"Diem trung binh : "<<p[i].diemtb()<<endl;
//		}
//	}
//	
//	sapxep(p,n);
//	cout<<"\n-----------SAP XEP-------------------";
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\nThong tin thi sinh thu "<<i+1<<" :\n";
//		cout<<p[i];
//	}
		thisinhkhoiA ts("a", "a", "a", "a", 1,2,3); 
		thisinh a;
		cout<<ts.diemtb();
}
