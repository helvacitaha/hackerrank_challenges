#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t,c;
    cin>>c;
    vector<int> a;
    for(int i=0;i<c;i++){
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    
    for(int i=0;i<c;i++){
        
        cout<<a[i]<<' ';
        
    }
    
    return 0;
}
