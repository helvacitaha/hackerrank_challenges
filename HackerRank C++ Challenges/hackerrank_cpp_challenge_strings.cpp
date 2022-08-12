#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int al,bl;
    al=a.size();
    bl=b.size();
    cout<<al<<' '<<bl<<"\n";
    string c=a+b;
    cout<<c<<"\n";
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<' '<<b;
      
    return 0;
}