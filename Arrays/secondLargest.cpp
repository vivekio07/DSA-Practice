#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {3, 5, 1, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i=0; i<n;i++){
    if(mx<arr[i])mx=arr[i];   
    }
     for(int i=0; i<n;i++){
     if(smx<arr[i] && arr[i]!=mx)smx=arr[i];  
    }
        
    cout<<smx;   
}
