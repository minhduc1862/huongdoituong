#include<iostream>
using namespace std;

class oxy
{
	private:
		float x;
	protected:
		float y;
	public:
		oxy()
		{
		}
		oxyz(float x, float y)
		{
			this->x = x;
			this->y = y;
		}
		void hienthi()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};

class oxyz : public oxy
{
	private:
		float z;
	public:	
		oxyz(float y, float z):oxy(float x, float y)
		{
			
		}
		void getY()
		{
			y = 5;
			cout<<"y="<<y<<endl;
			
			cout<<endl;
		}
};


int main()
{
	oxyz mp;
	mp.getY();
	
	
	oxy dt(10,20);
	mp.hienthi();
}
