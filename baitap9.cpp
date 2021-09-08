#include<iostream>
using namespace std;

class ptgt
{
	private:
		string hangsx;
		string tenpt;
		int namsx;
		float vantoc;
	public:
		ptgt()
		{
		}
		ptgt(string hangsx, string tenpt, int namsx, float vantoc)
		{
			this->hangsx = hangsx;
			this->tenpt = tenpt;
			this->namsx = namsx;
			this->vantoc = vantoc;
		}
		~ptgt()
		{
		}
		friend istream& operator >>(istream &nhap,ptgt &pt);
		friend ostream& operator <<(ostream &hienthi,ptgt pt);
};

istream& operator >> (istream &nhap, ptgt &pt)
{
	cout<<"\nHang san xuat : ";
	nhap >> pt.hangsx;
	cout<<"Ten phuong tien : ";
	nhap >> pt.tenpt;
	cout<<"Nam san xuat : ";
	nhap >> pt.namsx;
	cout<<"Van toc toi da : ";
	nhap >> pt.vantoc;
	return nhap;
}

ostream& operator <<(ostream &hienthi, ptgt pt)
{
	hienthi<<"\nHang san xuat :"<<pt.hangsx<<endl;
	hienthi<<"Ten phuong tien : "<<pt.tenpt<<endl;
	hienthi<<"Nam san xuat : "<<pt.namsx<<endl;
	hienthi<<"Van toc toi da : "<<pt.vantoc<<endl;
	return hienthi;
}

class oto : public ptgt
{
	private:
		int sochongoi;
		string dongco;
	public:
		oto():ptgt()
		{
		}
		oto(string hangsx, string tenpt, int namsx, float vantoc, int sochongoi, string dongco):ptgt(hangsx,tenpt,namsx,vantoc)
		{
			this->sochongoi = sochongoi;
			this->dongco = dongco;
		}
		~oto()
		{
		}
		friend istream& operator >>(istream &nhap,oto &o);
		friend ostream& operator <<(ostream &hienthi,oto o);
};

istream& operator >>(istream &nhap,oto &o)
{
	cout<<"So cho ngoi : ";
	nhap>>o.sochongoi;
	cout<<"Kieu dong co : ";
	getline(nhap,o.dongco);
	return nhap;
}

ostream& operator <<(ostream &hienthi,oto o)
{
	hienthi<<"So cho ngoi : "<<o.sochongoi<<endl;
	hienthi<<"Kieu dong co : "<<o.dongco<<endl;
	return hienthi;
}

int main()
{
	ptgt p;
	cout<<"-----------NHAP THONG TIN PHUONG TIEN GIAO THONG------------";
	cin>>p;
	cout<<"\n\n";
	cout<<"----------HIEN THI THONG TIN PHUONG TIEN GIAO THONG-------------";
	cout<<p;
	
	cout<<"\n\n";
	oto *ptr;
	ptr = new oto[100];
	int n;
	cout<<"Nhap so xe oto : ";
	cin>>n;
	cout<<"-----------NHAP THONG TIN XE OTO------------";
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"Nhap thong tin xe oto thu "<<i+1<<" :\n";
		cin>>ptr[i];
	}
	
	cout<<endl;
	cout<<"-----------THONG TIN XE OTO------------";
	for(int i=0;i<n;i++)
	{
		cout<<"Thong tin xe oto thu "<<i+1<<" :\n";
		cout<<ptr[i];
	}
}
