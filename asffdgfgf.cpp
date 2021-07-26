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
		void hienthi123(duc c)
		{
			cout<<"Hien thi:"<<c.tinhcam<<endl;
		}
};

class duc
{
	private:
		string tinhcam;
	public:
		duc()
		{
			tinhcam = "anh em";
		}
		duc(string tc)
			:tinhcam(tc)
		{
		}
		
		void hienthi()
		{
			thanh t;
			t.tien = 5000;
			cout<<"duc lay tien cua thanh la:"<<t.tien<<endl;
		}
		friend class thanh;
};

int main()
{
	// duc la ban cua thanh
//	thanh t;
//	duc c;
//	c.hienthi();

	// thanh la ban cua duc
	duc c;
	thanh t;x
	t.hienthi123(c);
}
