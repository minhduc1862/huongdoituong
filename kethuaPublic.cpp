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
			x = 1;
			cout<<"x = "<<x<<endl;
		}
};

class oxyz : public oxy
{
	private:
		float z;
	
	//chuyen thanh
//	protected:
//		float y;
	
	// chuyen thanh
//	public:	
//		void hienthi()
//		{
//			x = 1;
//			cout<<"x = "<<x<<endl;
//		}

};

int main()
{
	oxyz mp;
	mp.hienthi();
}
