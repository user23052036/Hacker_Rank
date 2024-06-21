#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    int queries;
    cin >> queries;

    while (queries--) {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);

        if (it != v.end() && *it == x) // Ensure it is not v.end() before dereferencing
            cout << "Yes " << it - v.begin()+1 << "\n";// as 1-based index
        else
            cout << "No " << it - v.begin()+1 << "\n";
    }
    return 0;
}
