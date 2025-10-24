#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int combination(int n, int r) {
    if (r==0 or r==n) return 1;
    if (r>n) return 0;
    if (r==1) return n;
    return combination(n-1, r-1)+combination(n-1, r);
}
int main() {
    int n, r;
    cin>>n>>r;
    cout<<combination(n, r)<<endl;
    return 0;
}