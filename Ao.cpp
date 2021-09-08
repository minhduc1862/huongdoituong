#include<iostream>
using namespace std;

class color
{
	private:
		int x;
		int y;
	public:
		color(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		
		virtual void display()
		{
//			cout<<"aaa";
		}
		
		
		void hienthi()
		{
			cout<<"x="<<this->x<<endl;
			cout<<"y="<<this->y<<endl;
			display();
			
		}
};

class colorpoint : public color
{
	private:
		int z;
	public:
		colorpoint(int x,int y, int z):color(x,y)
		{
			this->z = z;
		}
		
		virtual void display()
		{
			cout<<"z="<<this->z<<endl;
		}
		
};

class color1
{
	public:
		friend void colorpoint::display();
};

int main()
{
	colorpoint p(1,2,3);
	p.hienthi();
	color1 c;
	c.display();
}
