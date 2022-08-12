#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream s(str);
    char u;
    int count=1;
    for(int i=0;str[i]!='\0';i++){ // comparing str[i] to null
        if(str[i]==','){
            count++;
        }
    }
    int n[count];
    for(int i=0;i<count;i++){
        s>>n[i]>>u;
    }
    vector<int> r;
    for(int i=0;i<count;i++)
    {
        
        r.push_back(n[i]);
        
    }
    return r;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}