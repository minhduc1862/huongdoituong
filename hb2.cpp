#include<iostream>
using namespace std;
class thanh;
class duc
{
	private:
		float diem;
	public:
		duc()
		{
			diem = 9;
		}
		friend void hienthi(duc d, thanh t);
};

class thanh
{
	private:
		float diem;
	public:
		thanh()
		{
			diem = 10;
		}
		friend void hienthi(duc d, thanh t);
};

void hienthi(duc d,thanh t)
{
	cout<<"Diem cua duc : "<<d.diem<<endl;
	cout<<"Diem cua thanh : "<<t.diem;
}

int main()
{
	duc d;
	thanh t;
	hienthi(d,t);
}
