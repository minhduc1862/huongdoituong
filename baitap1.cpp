#include<iostream>
using namespace std;

class people
{
	protected:
		string ten;
		int tuoi;
		string diachi;
	public:
		people()
		{
			ten = "";
			tuoi = 0;
			diachi = "";
		}
		~people()
		{
		}
		
		void set()
		{
			cout<<"Nhap ten : ";
			fflush(stdin);
			getline(cin,ten);
			cout<<"Nhap tuoi : ";
			cin>>tuoi;
			cout<<"Nhap dia chi : ";
			fflush(stdin);
			getline(cin,diachi);
		}
		void get()
		{
			cout<<endl<<"Ten : "<<ten<<endl;
			cout<<"Tuoi : "<<tuoi<<endl;
			cout<<"Dia chi : "<<diachi<<endl;
		}
};

class student : public people
{
	private:
		int id;
		float toan;
		float ly;
		float hoa;
	public:
		student()
		{
			id = 0;
			toan = 0;
			ly = 0;
			hoa = 0;
		}
		void set()
		{
			cout<<"\n-----NHAP THONG TIN SINH VIEN------"<<endl;
			people::set();
			cout<<"Nhap ID : ";
			cin>>id;
			cout<<"Nhap diem toan : ";
			cin>>toan;
			cout<<"Nhap diem ly : ";
			cin>>ly;
			cout<<"Nhap diem hoa : ";
			cin>>hoa;
		}
		
		void get()
		{
			people::get();
			cout<<"ID : "<<id<<endl;
			cout<<"Toan : "<<toan<<endl;
			cout<<"Ly : "<<ly<<endl;
			cout<<"Hoa : "<<hoa<<endl;
		}
		
		void gpa()
		{
			cout<<"Diem trung binh : "<<(toan+ly+hoa)/3;
		}
};

int main()
{
	student hs;
	hs.set();
	hs.get();
	hs.gpa();
}
