#include <iostream>
using namespace std;

int main () {
    int n, k, o, ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        ans = 0;
        for (int j =0; j < k; j++) {
            cin >> o;
            ans += o;
        }
        cout << ans - (k -1) << endl;
    }
    

    return 0;
}