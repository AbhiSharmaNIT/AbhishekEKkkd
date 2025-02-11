#include <iostream>
using namespace std;

string can_divide_watermelon(int w) {
    if (w > 2 && w % 2 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int w;
    cin >> w;
    cout << can_divide_watermelon(w) << endl;
    return 0;
}
