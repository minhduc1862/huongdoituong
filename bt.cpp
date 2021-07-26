#include <bits/stdc++.h>
using namespace std;
 
class sinhvien
{
private:
    string ten, masinhvien;
    int tuoi;
public:
    void set()
    {
        cin.ignore();
        cout << "Nhap Ma Sinh Vien"; getline(cin, this->masinhvien);
        cout << "Nhap Ten: "; getline(cin, this->ten);
        cout << "Nhap Tuoi: "; cin >> this->tuoi;
    }
 
    void get()
    {
        cout << "Ma Sinh Vien: " << this->masinhvien << endl;
        cout << "Ten: " << this->ten << endl;
        cout << "Tuoi: " << this->tuoi << endl;
    }
};
 
int main()
{
    sinhvien obj;
    obj.set();
    obj.get();   
}
