#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
