#include<iostream>
using namespace std;

int main() {
    // For loop to print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While loop to sum numbers from 1 to 10
    int sum = 0;
    int i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    cout << "Sum: " << sum << endl;

    return 0;

}
