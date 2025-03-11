#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the Size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<" Enter Element " << i+1 << ": ";
        cin>>arr[i];
    }

    cout<<" Elements of Array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}