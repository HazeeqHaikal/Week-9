#include <iostream>
#include <string>

using namespace std;

int main() {

    int x = 0;
    while (x < 100) {
        if (x >= 50 && x % 7 == 0)
            cout << x << " ";
        x += 2;
    }

    return 0;
}