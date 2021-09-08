#include<iostream>
using namespace std;

class point
{
	private:
		float x,y;
	public:
		point(float ox=0, float oy=0)
		{
			x = ox;
			y = oy;
		}
		virtual void display()
		{
			cout<<endl<<"x = "<<x;
			cout<<endl<<"y = "<<y;
		}
};

class colorpoint : public point
{
	private:
		int color;
	public:
		colorpoint(float ox=0,float oy=0,int c=0):point(ox,oy)
		{
			color = c;
		}
		virtual void display()
		{
			point::display();
			cout<<endl<<"color = "<<color;
		}
};

int main()
{
	colorpoint m(1,2,3);
	m.display();
	point p(4,5);
	p.display();
	point *ptr;
	ptr = &p;
	ptr->display();
	ptr= &m;
	ptr->display();
}
