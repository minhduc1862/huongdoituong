#include<iostream>
using namespace std;

class point
{
	private:
		float x;
		float y;
	public:
		point()
		{
//			cout<<"Ham thiet lap khong tham so";
			x = 0;
			y = 0;
		}
		point(float ox, float oy)
		{
			this->x = ox;
			this->y = oy;
		}
		
		// ham hien thi toa do x va y
		void hienthi()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
		
		void tinhtien(float dx, float dy)
		{
			x += dx;
			y += dy;
		}
};

class colorpoint : public point
{
	private:
		string color;
	public:
		colorpoint():point()
		{
			color = "";
		}
		colorpoint(float ox, float oy, string c):point(ox, oy)
		{
			this->color = c;
		}
		
		void display()
		{
			hienthi();
			cout<<"Mau cua diem la: "<<color<<endl;
		}
};

int main()
{
	colorpoint p(1,2, "xanh");
	p.display();
}
