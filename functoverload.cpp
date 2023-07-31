#include <iostream>
using namespace std;

class display{
public:
    void dis(int a,int b){cout<<"Integers:"<<a<<" & "<<b<<endl;}
    
    void dis(double a,double b){cout<<"Doubles:"<<a<<" & "<<b<<endl;}
    
    void dis(int a, double b){cout<<"Integer: "<<a<<" & Double: "<<b<<endl;}};

int main(){
    int t=5,u=50;
    double v=500.05,w=500.005;
    display d;
    d.dis(t,u);d.dis(v,w);d.dis(t,v);
}
