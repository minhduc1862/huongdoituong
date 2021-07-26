#include<iostream>
using namespace std;

class oxy
{
	protected:
		float x;
		float y;
	public:
		// ham khoi tao khong tham
		oxy()
		{
		}
		
		// ham khoi tao co tham so
		oxy(float new_x, float new_y)
		{
			this->x = new_x;
			this->y = new_x;
		}
};

class oxyz : public oxy
{
	private:
		float z;
	public:
		// ham khoi tao khong tham
		oxyz():oxy()
		{
			
		}
		
		// ham kkhoi tao co tham so 
		oxyz(float x_new, float y_new,float z_new):oxy(x_new, y_new)
		{	
			this->z = z_new;
		}

		void hienthi()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;		
		}		
		
};

int main()
{
	oxyz mp(1,2,3);
	mp.hienthi();
}
