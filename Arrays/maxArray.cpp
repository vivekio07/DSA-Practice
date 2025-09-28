#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {3, 5, 1, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;

    for(int i=0; i<n;i++){
    mx= max(mx,arr[i]);   
    }
        
    cout<<mx;   
}
