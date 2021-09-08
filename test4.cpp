	#include <iostream>
using namespace std;

class Mayvitinh{  
	public: 	 	 	
	virtual void show(){
	    cout << "mayvitinh" << endl;
	}
	void hienthi()
	{
		show();
	}
	
	
}; 
class mayAcer: public Mayvitinh{  	
    public: 	 	 	
    virtual void show(){
        cout << "mayAcer" << endl;
    }
}; 

int main(){
    mayAcer may1; 
    Mayvitinh tenmay ;//= new Mayvitinh();//&may1;
    may1.hienthi();
}
