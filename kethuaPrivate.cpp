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
		void hienthi()
		{
			x = 10;
			y = 20;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};

class oxyz : private oxy
{
	private:
		float z;
		
		// chuyen thanh
//		float y
	public:	
	
		void getY()
		{
			y = 5;
			cout<<"y="<<y<<endl;
			
			cout<<endl;
			hienthi();
		}
};


int main()
{
	oxyz mp;
	mp.getY();
	
	
	oxy dt;
	
}
