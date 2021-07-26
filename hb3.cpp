#include<iostream>
using namespace std;

class thanh
{
	private:
		float diem;
	public:
		thanh()
		{
		}
		void hienthi();
};

class duc
{
	private:
		float diem;
	public:
		duc()
		{
			diem = 10;
		}
		friend void thanh::hienthi();
};

void thanh::hienthi()
{
	duc d;
	cout<<"Diem cua duc la : "<<d.diem;
}

int main()
{
	
	thanh t;
	t.hienthi();
}
