#include <iostream>
using namespace std;

int ifelse(int a, int b, int c){
    if(c>b && c>a) return c;
    else if(b>a && b>c) return b;
    else return a;
}

int tern(int a, int b, int c){
    int r=(a>c && a>b) ? a : (c>b && c>a) ? c : (b>c && b>a) ? b : 0;
    return r;
}

int main() {
    cout<<" Enter the three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Using if else: " <<ifelse(a,b,c)<<endl;
    cout<<"Using ternary operator: "<<tern(a,b,c);
    return 0;
    
}
