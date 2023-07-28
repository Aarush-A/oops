#include <iostream>
using namespace std;

void swap3(int& a, int& b){
    int c=b;
    b=a;
    a=c;
}

void swap2(int& a, int& b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int main() {
    cout<<"Enter Numbers: ";
    int a,b;
    cin>>a>>b;
    swap3(a,b);
    cout<<"Using temp variable: " <<a<<" "<<b<<endl;
    swap2(a,b);
    cout<<"Using xor: "<<a<<" "<<b;
    return 0;
}
