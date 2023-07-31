#include <iostream>
using namespace std;

class over{
public:
    void area(float a){
        cout<<"area of circle:"<<3.14*a*a<<endl;
    }
    void area(int a, int b){
        cout<<"area of rectangle:"<<a*b<<endl;
    }
    void area(int a){
        cout<<"area of square:"<<a*a<<endl;
    }
    void area(float a,float b){
        cout<<"area of triangle:"<<0.5*a*b<<endl;
    }
    
};
int main() {
    over n;
    n.area(5.2);
    n.area(5,2);
    n.area(10);
    n.area(5.2,4.2);
}
