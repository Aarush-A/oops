#include <bits/stdc++.h>
using namespace std;

void revcheck(char* arr, int n){
    int i=0;
    int j=n-1;
    bool flag=true;
    while(i<j){
        swap(arr[i],arr[j]);
        if(arr[i]!=arr[j]) flag=false;
        i++;
        j--;
    }
    cout<<"Reversed: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Palindrome? (0/1): "<<flag;
}

int main() {
    int n;
    cout<<"Enter size:";
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Char: ";
        cin>>arr[i];
    }
    revcheck(arr,n);
}
