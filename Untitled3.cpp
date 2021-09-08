#include<iostream>
using namespace std;

class ptgt
{
	protected:
		string hangsx;
		string tenpt;
		int namsx;
		float vtmax;
	public:
		ptgt()
		{
		}
		
		ptgt(string hangsx, string tenpt, int namsx, float vtmax)
		{
			this->hangsx = hangsx;
			this->tenpt = tenpt;
			this->namsx = namsx;
			this->vtmax = vtmax;
		}
		
		~ptgt()
		{
		}
		
		void nhap();
		void hienthi();
};

void ptgt::nhap()
{
	cout<<"Nhap hang san xuat:";
	fflush(stdin);
	getline(cin, this->hangsx);
	
	cout<<"Nhap ten phuong tien:";
	fflush(stdin);
	getline(cin, this->tenpt);
	
	cout<<"Nhap nam san xuat:";
	cin>>this->namsx;
	
	cout<<"Nhap van toc toi da:";
	cin>>this->vtmax;	
}

void ptgt::hienthi()
{
	cout<<"Hang san xuat:"<<this->hangsx<<endl;
	cout<<"Ten Phuong tien:"<<this->tenpt<<endl;
	cout<<"Nam san xuat:"<<this->namsx<<endl;
	cout<<"Van toc toi da:"<<this->vtmax<<endl;
}

class oto : public ptgt
{
	private:
		int sochongoi;
		string kieudongco;
	public:
		oto():ptgt()
		{
		}
		
		oto(string hangsx, string tenpt, int namsx, float vtmax, int sochongoi, string kieudongco):ptgt(hangsx, tenpt, namsx,vtmax)
		{
			this->sochongoi = sochongoi;
			this->kieudongco = kieudongco;
		}
		
		~oto()
		{
		}
		
		friend istream& operator >> (istream &nhap, oto &ot);
		friend ostream& operator << (ostream &hienthi, oto ot);
		
		float vtcoso()
		{
			return vtmax/sochongoi;
		}
		
//		bool operator < (oto ot)
//		{
//			if(vtcoso() < ot.vtcoso() )
//			{
//				return true;
//			}
//			return false;
//		}
		
//		friend void sapxep(oto *ot, int n);
		void sapxep(oto ot[100], int n);
};

istream& operator >> (istream &nhap, oto &ot)
{
	ot.nhap();
	cout<<"Nhap so cho nguoi:";
	nhap >> ot.sochongoi;
	
	cout<<"Nhap kieu dong co:";
	fflush(stdin);
	getline(nhap, ot.kieudongco);
}

ostream& operator << (ostream &hienthi, oto ot)
{
	ot.hienthi();
	hienthi << "So cho nguoi:"<<ot.sochongoi<<endl;
	hienthi << "Kieu dong co:"<<ot.kieudongco<<endl;
}


void hoanvi(oto &ot1, oto &ot2)
{
	oto ot3;
	ot3 = ot1;
	ot1 = ot2;
	ot2 = ot3;
}

void oto::sapxep(oto ot[100], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ot[i].vtcoso() < ot[j].vtcoso() == true)
			{
				hoanvi(ot[i],ot[j]);
			}
		}
	}
}

int main()
{
//	ptgt p;
//	cout<<"-----------NHAP THONG TIN PHUONG TIEN GIAO THONG------------";
//	p.nhap();
//	cout<<"\n\n";
//	cout<<"----------HIEN THI THONG TIN PHUONG TIEN GIAO THONG-------------";
//	p.hienthi();
	
//	cout<<"\n\n";
	oto *ptr;
	ptr = new oto[100];
	int n;
	cout<<"Nhap so xe oto : ";
	cin>>n;
	cout<<"-----------NHAP THONG TIN XE OTO------------\n";
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
		cout<<"Van toc co so:"<<ptr[i].vtcoso()<<endl;
	}
	
	cout<<"-----------------SAP XEP-------------------\n";
//	sapxep(ptr,nsf);
	ptr->sapxep(ptr, n);
	for(int i=0;i<n;i++)
	{
		cout<<"Thong tin xe oto thu "<<i+1<<" :\n";
		cout<<ptr[i];
		cout<<"Van toc co so:"<<ptr[i].vtcoso()<<endl;
	}
	
}
