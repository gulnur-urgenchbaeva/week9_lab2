#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int maxDig(int n) {
    if (n==0) {
        return 0;
    }

    int dig = n%10;
    int maxAll = maxDig(n/10);

    if (dig>maxAll) {
        return dig;
    }
    else {
        return maxAll;
    }
}
int main() {
    int n;
    cin>>n;
    cout << maxDig(n) << endl;
    return 0;
}