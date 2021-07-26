#include<iostream>
using namespace std;

class CPoint
{
	private:
		float x;
		float y;
	public:
		CPoint()
		{
		}
		CPoint(float x, float y);
		CPoint(double x)
		{
			this->x = x;
		}
		
		CPoint(int y)
		{
			this->y = y;
		}
		void hienthi()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};

CPoint::CPoint(float x, float y)
{
	this->x = x;
	this->y = y;
}
int main()
{
	CPoint p(5.5);
	p.hienthi();
//	p.CPoint(5,5);
//	p.khoitao(5.5,5.5);
}
