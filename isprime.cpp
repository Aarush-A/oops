#include <iostream>
using namespace std;

int isprime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main() {
    cout<<"Enter Number: ";
    int a;
    cin>>a;
    cout<<"The number is prime? (0/1): " <<isprime(a);
    return 0;
}
