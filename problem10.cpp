#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int binRep(int n) {
    if (n>0) {
        return binRep(n/2)*10 + n%2;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<binRep(n)<<endl;
    return 0;
}