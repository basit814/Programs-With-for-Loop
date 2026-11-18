#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 2; i <= 50; i++) {
            sum = sum + i;
            i++;
    }
    cout << "Sum of even numbers 1 to 50 = " << sum;
    return 0;
}
