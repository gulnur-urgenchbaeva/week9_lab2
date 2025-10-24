#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int digCount(int n) {
    if (n<=9) {
        return 1;
    }
    else {
        return 1+digCount(n/10);
    }
}
int main() {
    int n;
    cin>>n;
    cout << digCount(n) << endl;
    return 0;
}