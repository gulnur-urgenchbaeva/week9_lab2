#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int sum(int n) {
    if (n>0) {
        if (n%2==0) {
            return n+sum(n-2);
        }
        else {
            return sum(n-1);
        }
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}