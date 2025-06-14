//GCD (Greatest Common Divisor) and HCF (Highest Common Factor) are same things —
// they refer to the largest number that divides two numbers without leaving a remainder.

// For numbers 8 and 12
// Factors of 8 → 1, 2, 4, 8
// Factors of 12 → 1, 2, 3, 4, 6, 12
// Common factors → 1, 2, 4 → Largest = 4
// ✅ So, GCD(8, 12) = 4
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main() {
    int a = 100, b = 25;
    cout << "GCD is: " << gcd(a, b);
    return 0;
}