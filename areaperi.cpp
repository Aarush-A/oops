#include <iostream>
using namespace std;

class parea{
public:
    double radius;
    int breadth;
    int length;
    
    parea(double radius){
        this->radius=radius;
        cout<<"Perimeter Of Circle: "<<2*3.14*radius<<endl<<"Area: "<<3.14*radius*radius<<endl<<endl; 
    }
    
    parea(int breadth){
        this->breadth=breadth;
        cout<<"Perimeter Of Sqaure: "<<4*breadth<<endl<<"Area: "<<breadth*breadth<<endl<<endl;
    }
    
    parea(int breadth,int length){
        this->breadth=breadth;
        this->length=length;
        cout<<"Perimeter Of Rectangle: "<<2*(breadth+length)<<endl<<"Area: "<<breadth*length<<endl<<endl;
    }
    
    ~parea(){
        cout<<"Deleted";
    }
    
};

int main() {
    parea* p1=new parea(5.6);
    parea* p2=new parea(5);
    parea* p3=new parea(2,3);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}
