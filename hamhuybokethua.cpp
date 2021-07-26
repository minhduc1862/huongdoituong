#include<iostream>
using namespace std;

class base
{
	protected:
		int x;
	public:
		void set(int i)
		{
			x = i;
		}
		void display()
		{
			cout<<"x = "<<x;
		}
};

class huybo1 : public base
{
	public:
		void display()
		{
			cout<<"x = "<<x;	
		}
};

class huybo2 : private base
{
	public:
		void display()
		{
			set(2);
			base::display();
		}
};

int main()
{
	huybo1 a;
	huybo2 b;
	a.set(1);
	a.display();
	b.display();
}
