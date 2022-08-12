#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    for(int i=1;i<s+1;i++){
        cout<<arr[s-i]<<" ";
    }
    return 0;
}
