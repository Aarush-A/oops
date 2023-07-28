#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter Number: ";
    int a;
    cin>>a;
    vector<int> vec;
    while(a>0){
        vec.push_back(a%2);
        a/=2;
    }
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
    return 0;
}
