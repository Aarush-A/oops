#include <iostream>
using namespace std;

int chck(int x){
    int cnt=1;
    for(int i=2;i<x;i++){
        if(x%i==0){
            cnt+=i;
        }
    }
    if(cnt==x) return 1;
    else return 0;
}
int main() {
    for(int i=1;i<=500;i++){
        if(chck(i)==1){
            cout<<i<<endl;
        }
    }
    return 0;
}
