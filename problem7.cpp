#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int fibonacci(int n) {
    if (n<=1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n_term;
    cin>>n_term;
    for (int i=0;i<n_term;i++) {
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    return 0;
}