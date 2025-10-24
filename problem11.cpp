#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
bool isPrime(int n, int div = 2) {
    if (n<=1) return false;
    if(n==2) return true;
    if(n%div==0) return false;
    if (div*div > n) return true;
    return isPrime(n, div+1);
}
int main() {
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
}