#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string numbers;

    // Extract the numbers and store them in 'numbers'
    for (char c : s) {
        if (c != '+') {
            numbers += c;
        }
    }

    // Sort the extracted numbers
    sort(numbers.begin(), numbers.end());

    // Reconstruct the string with sorted numbers and '+' between them
    string result;
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        result += numbers[i];
        if (i != n - 1) {
            result += '+';
        }
    }

    // Output the result
    cout << result;

    return 0;
}
