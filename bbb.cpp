#include<iostream>
using namespace std;

class matphang
{
	private:
		float x;
		float y;
	public:
		void init()
		{
			x = 1;
			y = 1;
		}
		void input()
		{
			cout<<"Nhap x = ";
			cin>>this->x;
			cout<<"Nhap y = ";
			cin>>this->y;
		}
		void display();
};
void matphang::display()
{
	cout<<"x = "<<x;
	cout<<"y = "<<y;
}

int main()
{
	matphang mp;
	mp.init();
	mp.display();
}
