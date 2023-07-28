#include <bits/stdc++.h>
using namespace std;

int largest(int* arr, int n;){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main() {
    int arr[5]={8,9,25,2,3};
    cout<<largest(arr,5);
}
