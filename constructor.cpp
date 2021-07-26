#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      void setChieuDai( double dai );
      double layChieuDai( void );
      Line();   // Day la phan khai bao constructor 
      ~Line();  // Day la phan khai bao destructor
 
   private:
      double chieudai;
};
 
// phan dinh nghia ham thanh vien, bao gom constructor va destructor
Line::Line(void)
{
    cout << "Doi tuong dang duoc tao" << endl;
}
Line::~Line(void)
{
    cout << "Doi tuong dang bi xoa!" << endl;
}
 
void Line::setChieuDai( double dai )
{
    chieudai = dai;
}
 
double Line::layChieuDai( void )
{
    return chieudai;
}
// ham main cua chuong trinh
int main( )
{
   Line line;
 
   // Thiet lap chieu dai cua line
   line.setChieuDai(6.0); 
   cout << "Chieu dai cua line la: " << line.layChieuDai() <<endl;
 
   return 0;
}
