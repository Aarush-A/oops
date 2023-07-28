#include <iostream>
using namespace std;

long fact(int a){
    long prod=1;
    for(int i=1;i<=a;i++){
        prod*=i;
    }
    return prod;
}

long rec(int a, long prod){
    if(a==0) return prod;
    prod*=a;
    rec(a-1, prod);
}

int main() {
    cout<<"Enter Number: ";
    int a;
    cin>>a;
    cout<<"Using simple method: " <<fact(a)<<endl;
    cout<<"Using recursion: "<<rec(a,1);
    return 0;
}
