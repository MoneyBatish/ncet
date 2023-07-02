#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int r, k;
    cin >> r >> k;
    int cool = 0;
    int veryCool = 0;

    for (int i = 1; i <= r; i++) {
        cool = 0;
        string binary = bitset<32>(i).to_string();
        binary = binary.substr(binary.find('1'));

        for (int j = 0; j <= binary.length() - 3; j++) {
            if (binary.substr(j,3) == "101") {
                cool++;
            }
            if (cool >= k) {
                veryCool++;
            }
        }
    }

    cout << veryCool << endl;
    return 0;
}
