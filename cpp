#include <iostream>

using namespace std;

int main() {
    int i, n;
    cout << "Введіть натуральне число i: ";
    cin >> i;
    cout << "Введіть натуральне число n (n > i): ";
    cin >> n;

    if (i <= 0 || n <= 0 || i >= n) {
        cout << "Помилка: i та n мають бути натуральними числами, причому i < n." << endl;
        return 1;
    }

    long long total_sum = 0;
    for (int num = i; num <= n; ++num) {
        if (num % 5 == 0) {
            total_sum += num;
        }
    }

    cout << "Сума чисел, кратних 5, на інтервалі [" << i << "; " << n << "]: " << total_sum << endl;
    return 0;
}
