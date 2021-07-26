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
		void khoitao()
		{
			x =  1;
			cout<<"x="<<x<<endl;
		}
};

class oxyz : protected oxy
{
	private:
		float z;
	
	// chyen thanh
//	protected:
//		float y;
//		oxy()
//		{
//		}
//		void khoitao();
	
	
	public:	
		void hienthi()
		{
			y = 10;
			cout<<"y="<<y<<endl;
			khoitao();
		}
		
	
};

int main()
{
	oxyz mp;
	mp.hienthi();
}
