#include <iostream>
#include <cmath>

int highestPowerof2(long n) {
    int p = static_cast<int>(log2(n));
    return static_cast<int>(pow(2, p));
}

int main() {
    int t;
    std::cin >> t;

    for (int z = 0; z < t; z++) {
        long n;
        std::cin >> n;

        if (n <= 3) {
            std::cout << "Steve" << std::endl;
            continue;
        }

        bool ans = true;
        while (n > 1) {
            int power = highestPowerof2(n);
            if (power == n) {
                n /= 2;
                if (n == 1) {
                    break;
                }
            } else {
                n -= power;
                if (n == 1) {
                    break;
                }
            }
            ans = !ans;
        }

        if (ans) {
            std::cout << "Steve" << std::endl;
        } else {
            std::cout << "Carter" << std::endl;
        }
    }

    return 0;
}
