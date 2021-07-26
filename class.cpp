#include<iostream>

using namespace std;

class sinhvien
{	
	public:
		int masv;
		string hoten;
		void nhap()
		{
			cout<<"Nhap ma sinh vien : ";
			cin>>this->masv;
			cout<<"Nhap ho ten : ";
//			cin.ignore();
			fflush(stdin);
			getline(cin,this->hoten);
		}
		void hienthi();
};
void sinhvien::hienthi()
{
	cout<<"Ma sinh vien:"<<this->masv<<endl;
	cout<<"Ho ten:"<<this->hoten<<endl;
}

int main()
{
	sinhvien duc;
//	duc.masv = 5;
//	duc.hoten = "thanh";
//	cout<<"Ma sv:"<<duc.masv<<endl;
//	cout<<"Ten:"<<duc.hoten;
	
	duc.nhap();
	duc.hienthi();
}
