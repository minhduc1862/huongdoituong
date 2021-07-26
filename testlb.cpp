#include<iostream>
using namespace std;
class duc;
class thanh
{
	private:
		float tien;
	public:
		thanh()
		{
		}
		thanh(float tien)
			  :tien(tien)
		{
		}
		friend class duc;
		void chu();
//		{
//			duc d;
//			d.tinhcam = "anh em";
//			cout<<"mqh la: "<<d.tinhcam<<endl;
//		}
};


class duc
{
	private:
		string tinhcam;
	public:
		duc()
		{
		}
		duc(string tinhcam):tinhcam(tinhcam)
		{
		}
		
		friend class thanh;
		
		void hienthi(thanh t)
		{
			t.tien = 5000;
			cout<<"duc lay tien cua thanh la : "<<t.tien<<endl;
		}
};

void thanh::chu()
{
	duc d;
	d.tinhcam = "anh em";
	cout<<"mqh la: "<<d.tinhcam<<endl;
}
//void thanh::chu()
//{
//	
//}

int main()
{
	// duc la ban cua thanh
//	thanh t;
//	duc c;
//	c.hienthi();

	// thanh la ban cua duc
//	duc c;
//	thanh t;
//	t.hienthi123(c);
	
	thanh t;
//	duc d;
//	d.hienthi(t);
	t.chu();
}
