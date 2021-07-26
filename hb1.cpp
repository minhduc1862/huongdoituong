#include<iostream>
using namespace std;

class duc
{
	private:
		float diem;
	public:
		duc(float diem)
		{
			this->diem = diem;
		}
		
		friend void hienthi(duc d); 
};

void hienthi(duc d)
{
	cout<<"Diem = "<<d.diem;
}

int main()
{
	duc d(10);
	hienthi(d);
}
