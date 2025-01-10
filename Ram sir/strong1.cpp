#include <iostream>
using namespace std;

int main() {
    int fact, b, n, t, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    b = n;

    while (b > 0) {
        t = b % 10;  

        
        fact = 1;
        int i = 1;

        
        while (i <= t) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;  
        b = b / 10;        
    }

    if (sum == n) {
        cout << "Number is a Strong Number: " << sum << endl;
    } else {
        cout << "Number is not a Strong Number: " << sum << endl;
    }

    return 0;
}
