#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int gcd(int a, int b) {
    int res=1;
    int minLim;
    if (a<b) {
        minLim=a;
    }
    else {
        minLim=b;
    }

    for (int i=1; i<=minLim; i++) {
        if (a%i==0 && b%i==0) {
            res=i;
        }
    }
    return res;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
    return 0;
}