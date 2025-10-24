#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void reverse(int n) {

    if (n!=0) {
        cout << n % 10;
        return reverse(n/10);
    }

}
int main() {
    int n;
    cin >> n;
    reverse(n);
    return 0;
}