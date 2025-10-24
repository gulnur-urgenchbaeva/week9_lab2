#include <iostream>
#include <ctime>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(time(0));

    for (int i = 1; i <= 100; i++) {
        cout << rand() << " ";
    }
    cout << endl;
    return 0;
}