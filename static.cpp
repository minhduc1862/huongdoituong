#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int width;
        int length;
        static int count;
    public:
    	static int getcount()
    	{
    		return count;
		}
        void set(int w, int l)
        {
        	this->width = w;
        	this->length = l;
		}
        int area();
        Rectangle()
        {
            count++;
        }
        Rectangle(int x, int y) 
        { 
            count++; 
//            set(x,y);
			this->width = x;
			this->length = y;
        }
        
        void dientich();
        void chuvi();
};
int Rectangle::count = 0;
int main()
{
	
//	Rectangle h1(1,2);
//	cout<<"count = "<<Rectangle::getcount();
	
	Rectangle thanh(3,4);
	cout<<Rectangle::getcount();
}
