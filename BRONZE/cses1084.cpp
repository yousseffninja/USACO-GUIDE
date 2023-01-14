//
// Created by yukun on 1/14/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, x, count = 0;
    cin >> n >> m >> k;
    vector<int> apart(n);
    vector<int> max(m);
    vector<int> min(m);

    for(int i = 0; i < n; i++)
        cin >> apart[i];
    for(int i = 0; i < m; i++) {
        cin >> x;
        max[i] = x + k;
        min[i] = x - k;
    }

    for(auto el : apart){
        for(int i = 0; i < m; i++) {
            if (el >= min[i] and el <= max[i]){
                count++;
                min.erase(min.begin() + i);
                max.erase(max.begin() + i);
                break;
            }
        }
    }
    cout << count;
}