#include<iostream>
using namespace std;

class sinhvien
{
	private:
		string masv;
		string tensv;
		float diem = 10;
	public:
		sinhvien()
		{
		}
		sinhvien(string masv,const string &tensv,float diem)
//				:masv(masv_new), tensv(tensv_new), diem(diem_new)
		{
			this->masv=this->masv;
			this->tensv=this->tensv;
			this->diem=this->diem;
		}
		~sinhvien()
		{
		}
		void nhap()
		{
			cout<<endl<<"Nhap ma sinh vien : ";
			fflush(stdin);
			getline(cin,this->masv);
			cout<<"Nhap ten sinh vien : ";
			fflush(stdin);
			getline(cin,tensv);
			cout<<"Nhap diem : ";
			cin>>diem;
		}
		void hienthi()
		{
			cout<<"Ma sinh vien : "<<masv<<endl;
			cout<<"Ten sinh vien : "<<tensv<<endl;
			cout<<"Diem : "<<diem;
		}
		void setMasv(string masv)
		{
			this->masv = masv;
//			strcpy(this->masv, masv);
		}
		
		
};
int main()
{
//	sinhvien sv("MASV2","thanh",8);
//	sv.hienthi();
//	
//	sv.nhap();
//	sv.hienthi();
//	sinhvien *sv = new sinhvien("2","thanh",8);
//	sv->nhap();
//	sv->hienthi();
//	sinhvien sv("2","Duc", 8);
//	sinhvien &sv1 = sv;
//	sv1.setMasv("1");
//	sv.hienthi();

	sinhvien *sv = new sinhvien("1", "duc", 10);
	sv->hienthi();
	delete sv;
}
