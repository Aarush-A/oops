#include <bits/stdc++.h>
using namespace std;
#define pi 3.14

float circle(int r){
    return r*r*pi;
}

float sq(int s){
    return s*s;
}

float rect(int b, int l){
    return b*l;
}

float triag(int b, int h){
    return 0.5*b*h;
}

int main() {
    int choice;
    cout<<"Enter choice: \n 1. Circle \n 2. Square \n 3. Rectange \n 4. Triange \n";
    cin>>choice;
    switch(choice){
        case 1:
            int r;
            cout<<"Enter Radius: ";
            cin>>r;
            cout<<circle(r)<<endl;
        case 2:
            int s;
            cout<<"Enter Side: ";
            cin>>s;
            cout<<sq(s)<<endl;
        case 3:
            int b,l;
            cout<<"Enter Breadth & Length: ";
            cin>>b>>l;
            cout<<rect(b,l)<<endl;
        case 4:
            int c,h;
            cout<<"Enter Base length & height: ";
            cin>>c>>h;
            cout<<triag(c,h)<<endl;
    }
}
