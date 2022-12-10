#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int x = 0; x < 100; x += 2) {
        if (x >= 50 && x % 7 == 0)
            cout << x << " ";
    }

    return 0;
}
