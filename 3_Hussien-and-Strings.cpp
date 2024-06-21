#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() != b.length()) {
        cout << "NO" << endl;
        return 0;
    }

    bool result = false;
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {

            swap(a[i], a[j]);

            if (a == b) {
                result = true;
            }

            swap(a[i], a[j]);

            if (result) {
                break;
            }
        }

        if (result) {
            break;
        }
    }

    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
